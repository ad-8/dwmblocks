//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/syscfg/scripts/freebsd/backlight.sh", 30,	0},
	{"", "~/syscfg/scripts/freebsd/vpn.sh", 5,	0},
	{"", "~/syscfg/scripts/freebsd/battery.sh", 5,	0},
	{"", "~/syscfg/scripts/freebsd/datetime.sh", 1,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
