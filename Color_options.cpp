#include <Windows.h>

/*
Param "c" in function color in 1 - 6 (rainbow colors)
1 - Red
2 - Yellow
3 - Green
4 - Light blue
5 - Blue
6 - Purple
*/
void color(int c)
{
	switch (c)
	{
	case 1:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		break;
	}
	case 2:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_RED);
		break;
	}
	case 3:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
		break;
	}
	case 4:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	}
	case 5:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);
		break;
	}
	case 6:
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_BLUE);
		break;
	}
	}
}

int main()
{
	return 0;
}
