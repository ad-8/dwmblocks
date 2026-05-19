//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "joker ~/syscfg/scripts/bb/weather.joke dwm", 600,	0},
	{"", "~/syscfg/scripts/openbsd/backlight.sh",       30,	0},
	{"", "~/syscfg/scripts/openbsd/volume.sh",           5,	0},
	{"", "~/syscfg/scripts/openbsd/vpn.sh",             30,	0},
	{"", "~/syscfg/scripts/openbsd/battery.sh",         20,	0},
	{"", "~/syscfg/scripts/freebsd/datetime.sh",         1,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
