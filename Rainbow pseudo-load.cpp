#include <windows.h>
#include <conio.h> 
#define store system("cls")
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
void loading()
{
	int x;
	int t;
	x = 40;
	t = 7;
	while (t != 0)
	{
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |*--------|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |-*-------|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |--*------|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |---*-----|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |----*----|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_BLUE);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |-----*---|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |------*--|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |-------*-|");
		Sleep(x);
		store;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                  Loading\n");
		printf("                                                                                |--------*|");
		Sleep(x);
		store;
		t--;
	}
	store;
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                 Done!\n");
	printf("                                                                     Press any button to continue");
	_getch();
	store;
}
int main()
{
	loading();
	return 0;
}
