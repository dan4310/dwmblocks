//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-music", 5, 30},

	{"", "sb-cpu", 5, 20 },

	{"", "sb-memory",	5,		0},

	{"", "sb-tasks", 5, 25},

	{"", "sb-pacpackages", 60, 0},

	{"", "sb-forecast", 60*60, 15},

	{"", "sb-clock",					5,		0},

	{"", "sb-volume", 0, 10},
	
	{"", "sb-internet", 5, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
