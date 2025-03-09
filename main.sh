#! /usr/bin/bash

# Print a line :]
print_line () {
	printf "$@\n";
}

# Print header
print_header () {	
	printf "\n${GREEN} --- $@ --- \n${NO_COLOR}\n";
}

# Print interactive
print_interactive_header () {	
	printf "\n\n\n\n\n\n\n\n${GREEN} --- $@ --- \n\n${NO_COLOR}";
}

# Copmile c files then run and remove ./a.out
run_cc () { 
	if [[ $use_raw_cc == 1 ]]; then
		cc $* && ./a.out && rm ./a.out & pid=$!;
	else
		cc -lbsd $* -Wall -Wextra -Werror && ./a.out && rm ./a.out & pid=$!;
	fi
	# Timeout for infinite loops
	for i in {1..55}; do
		read -n 1 -p "" -t 0.1 should_kill;
		if [[ $should_kill == "q" ]]; then
			print_line "uit process. \nTrace: terminated by the terminator";
			kill $pid;
		fi
		out=$( ps -p "$pid" --format=%p );
		if [[ ! $out == *"$pid"* ]]; then
			return;
		fi
	done
	out=$( ps -p "$pid" --format=%p );
	if [[ $out == *"$pid"* ]]; then
		print_line "Exit by timeout";
		kill $pid;
	fi
}

# Check global exercises
analyse_all () {
	clear;
	print_header "NORMINETTE";
	norminette -R CheckForbiddenSourceHeader $folder_path/../;
	print_header "GIT STATUS";
	git status
	print_header "GIT FILES";
	git ls-files
}

# Check exercises
analyse () {
	clear;
	print_header "NORMINETTE";
	norminette -R CheckForbiddenSourceHeader $exercises_path;
}

# Program variables
main_path=~/".easy_run"; #${HOME}/.easy_run # if [ ! ${HOME} ]; quit ; fi ;
joined_arguments="";
# cc -c -M ft_strlcat.c | grep -o bsd
#cflags="-Wall -Wextra -Werror"
#if [ ${requirebsd} ]
#then
	#cflags+=" -lbsd"
#fi

# Colors
#ESC='\033['
GREEN='\033[0;92m';
RED='\033[0;91m';
OPT_LEFT_COLOR='\033[0;92m';
OPT_COLOR='\033[0;97m';
NO_COLOR='\033[0;97m';
#NO_COLOR='\033[0m';
GRAY='\033[0;92m';

# Program options
options="hucDEtxr"; 
is_clearing=1;
is_developing=1;
is_testing=1;

# Get the options
while getopts $options option;
do
	 case $option in
		h) # display Help
			clear
			help_file="$main_path/help.txt";
			cat $help_file;
			exit;;
		u) # Update with git pull
			git -C $main_path pull
			exit;;
		c) # Don't clear | u stands for unclear or useless considering I'll never use it :] 
			is_clearing=0;;
		D) # Is downloading
			is_downloading=1;;
		t) # Is not testing
			is_testing=0;;
		x) # Is developing
			is_developing=0;;
		r) # Set use raw cc
			use_raw_cc=1;;
		E) # Is downloading eval
			is_downloading_eval=1;;
	esac
done

# Get non-option arguments (e.g. /home/usr/exercises/c_00/ft_putchar.c, ...)
count=0;
for arg in  $@;
do
	if [[ ! "$arg" =~ ^- ]]; then
		joined_arguments+="$arg ";
		count=count+1;
	fi
done

# Funny error message
if [ $count == 0 ]; then
	if [ $is_downloading -eq 1 ]; then
		print_line "No Dave, we don't magically know which link you want to use";
	else
		print_line "No Dave, we don't magically know which file or folder you want to use";
	fi
	exit;
fi

# Download files from intra
if [ $is_downloading -eq 1 ]; then
	print_line "Downloading files from $joined_arguments";
	wget -q -O - $joined_arguments | pdftotext - $main_path/tmp_subject.txt

	folders=($(awk 'BEGIN {directory="c_00";} \
	{if ($1 == "Turn-in") printf "%s/Exercises/%s/exercises/%s\n", ENVIRON["HOME"], directory, $4; \
	else if (NR==2) directory=gensub(/ /, "_", "g", tolower($0))}' $main_path/tmp_subject.txt))

	files=($(awk 'BEGIN {directory="c_00"; current_exercise="ex00/"} \
	{if ($1 == "Turn-in") current_exercise=$4; \
	else if ($1 == "Files") printf "%s/Exercises/%s/exercises/%s%s\n", ENVIRON["HOME"], directory, current_exercise, $6; \
	else if (NR==2) directory=gensub(/ /, "_", "g", tolower($0))}' $main_path/tmp_subject.txt))
	rm $main_path/tmp_subject.txt

	echo "---Folders"
	for folder in ${folders[@]}; do
		echo "$folder"
	done
	echo ""
	echo "---Files"
	for file in ${files[@]}; do
		echo "$file"
	done
	# Get conformation before creating folders and files
	read -n 1 -p "Is structure correct? (y/n)" user_input
	echo ""
	if [[ $user_input == "y" ]]; then
		for str in ${folders[@]}; do 
			mkdir -p $(echo "$str" | sed 's/.\{1\}$//')
			# sed removes last char, because bash programming is bash programming
		done
		for file in ${files[@]}; do 
			# TO DO - Add 42 header
			touch $file
		done
		echo -e "${GREEN}Files created${NO_COLOR}"
	fi
	exit;
fi

# Install eval in correct folder
if [ $is_downloading_eval -eq 1 ]; then
	git clone $joined_arguments ~/sgoinfre/exercises
	exit;
fi

# Parse paths
#for joined_argument in ${joined_arguments[@]}; do
#	echo "$joined_argument"
#	if [[ -d $joined_argument ]]; then
#		joined_argument="${joined_argument}/*.c";
#	fi
#done
#for joined_argument in ${joined_arguments[@]}; do
#	echo "$joined_argument"
#done
#exit
given_path="$( cut -d ' ' -f 1 <<< "$joined_arguments" )";
given_path=$(readlink -f "$given_path");
# If path is folder -> add every .c file in folder
if [[ -d $given_path ]]; then
	folder_path=$given_path;
	given_path="${given_path}/*.c";
fi

# Set exercises and tests path based on given path
if [[ $given_path =~ .*"exercises".* ]]; then
	exercises_path=${given_path};
	tests_path=$(readlink -f "$given_path" | sed -e 's/exercises/tests/g');
else
	tests_path=${given_path};
	exercises_path=$(readlink -f "$given_path" | sed -e 's/tests/exercises/g');
fi

open_actions () {
	# Log file options
	print_interactive_header "ACTION";
	print_line "${OPT_LEFT_COLOR}1) ${OPT_COLOR}Open exercise files${NO_COLOR}";
	print_line "${OPT_LEFT_COLOR}2) ${OPT_COLOR}Open test files${NO_COLOR}";
	print_line "";
	print_line "${OPT_LEFT_COLOR}r) ${OPT_COLOR}Rerun program${NO_COLOR}";
	print_line "${OPT_LEFT_COLOR}a) ${OPT_COLOR}Analyse parent folder${NO_COLOR}";
	print_line "${OPT_LEFT_COLOR}f) ${OPT_COLOR}Norminette file${NO_COLOR}";
	print_line "";
	print_line "${RED}q) ${OPT_COLOR}Exit${NO_COLOR}\n";
	printf "${NO_COLOR}File selection: ${NO_COLOR}" 
	tput civis
	# trap sigint tput cvvis -> quit
	read  -n 1 -p "" user_input;
	tput cvvis
	case $user_input in
		1)
			vim $exercises_path $tests_path;;
		2)
			vim $tests_path $exercises_path;;
		a)
			analyse_all
			open_actions;;
		f)
			analyse 
			open_actions;;
		r)
			clear;;
		q)
			clear;;&
		*)
			exit;;
	esac
}

run_cc_and_log () {
	if [ $is_clearing -eq 1 ]; then
		clear;
	fi
	print_header "FILES";
	if [ $is_testing -eq 1 ]; then
		print_line "$exercises_path - $tests_path";
		print_header "TEST FILE";
		cat $tests_path;
		print_header "OUTPUT";
		run_cc $exercises_path $tests_path;
	else
		print_line "$exercises_path";
		print_header "OUTPUT";
		run_cc $exercises_path;
	fi
	print_line "\n";
	if [ $is_developing -eq 1 ]; then
		open_actions;
		run_cc_and_log;
	fi
}

# Check if file is empty
if [ ! -s $given_path ]; then
	vim $exercises_path $tests_path;
fi

run_cc_and_log
