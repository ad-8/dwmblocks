//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/scripts/bb/weather.clj dwm", 300, 0},
	{"", "~/scripts/dwm-volume.sh", 10, 0},
//	{"", "~/scripts/dwm-dunst.sh", 10, 0},
	{"", "~/scripts/dwm-licht.sh",10, 0},
//	{" ", "checkupdates | wc -l", 300, 0},
	{"", "~/scripts/bb/dwm_disk_space.clj", 30, 0},
	{"󰍛 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5,	0},
	{"", "~/scripts/bb/vpn2.clj", 30, 0},
	{"", "~/scripts/dwm-date.sh", 1,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
