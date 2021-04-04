//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"", "~/my_scripts/mic", 0, 11},
	{"", "~/my_scripts/vol", 0, 10},
	{"", "~/my_scripts/bat", 10, 0},
	/*{" ", "echo $(printf '%03d\n' $(($(($(free -m | grep \"Mem:\" | awk '//{print $3}') * 100 )) / $(free -m | grep \"Mem:\" | awk '//{print $2}'))))", 30, 0},*/
	{"", "date '+%a, %d.%m %H:%M:%S'", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
