//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	/*{"", "~/.script/news", 60, 14},
	{"", "~/.script/task", 0, 11},
	{"", "~/.script/event", 0, 11},
	{"", "~/.script/inet", 5, 0},*/
	{"", "~/.script/mic", 0, 11},
	{"", "~/.script/vol", 0, 10},
	{"", "~/.script/bat", 10, 0},
	/*{" ", "echo $(printf '%03d\n' $(($(($(free -m | grep \"Mem:\" | awk '//{print $3}') * 100 )) / $(free -m | grep \"Mem:\" | awk '//{print $2}'))))", 30, 0},*/
	{"", "date '+%a, %d.%m %H:%M:%S'", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
