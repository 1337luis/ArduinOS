#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7
#define DEF 9

//FORE COLORS
const char[] fC = 
{
	'\033[30m',
	'\033[31m',
	'\033[32m',
	'\033[33m',
	'\033[34m',
	'\033[35m',
	'\033[36m',
	'\033[37m',
	'\033[38m',
	'\033[39m'
};

//BACK COLORS
const char[] bC = 
{
	'\033[40m',
	'\033[41m',
	'\033[42m',
	'\033[43m',
	'\033[44m',
	'\033[45m',
	'\033[46m',
	'\033[47m',
	'\033[48m',
	'\033[49m'
};

//BELL CHAR
const char bell = '0x07';
