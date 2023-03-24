//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "sb-memory",	5,		0},

	{"Task: ", "sb-tasks", 5, 0},

	{"Pac", "sb-pacpackages", 60, 0},

	{"", "sb-forecast", 60*60},

	{"", "sb-clock",					5,		0},
	
	{"Wifi: ", "sb-internet", 5, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
