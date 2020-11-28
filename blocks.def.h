//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",       "packages",                                                      0,     3},
	{"",       "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	     5,		3},
    {"",        "network",                                                      15,     3},
    {"",        "brightness",                                                    0,     1},
    {"",        "volume",                                                        0,     2},
    {"",        "battery",                                                       0,     3},
	{"",        "date '+%b %d %I:%M%p '",                                        0,     3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
