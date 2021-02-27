#include <Windows.h>

/*
Параметр "c" в функции color задаётся в диапозоне 1 - 6 (цвета радуги)
1 - Красный
2 - Жёлтый
3 - зелёный
4 - Голубой
5 - синий
6 - фиолетовый
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