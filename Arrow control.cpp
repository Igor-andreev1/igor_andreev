#include <conio.h>
#include <stdio.h>
/// <summary>
/// Displays the entered value "arrows"
/// can be edited for different aims
/// </summary>
void inputInfo()
{
    while (1)
    {
        int code = _getch();
        if (code == 0 || code == 224)
            code = _getch();
        switch (code)
        {
        case 75:
            printf("Left");
            break;
        case 77:
            printf("Right");;
            break;
        case 72:
            printf("Up");;
            break;
        case 80:
            printf("Down");;
            break;
        }
        _getch();
        system("cls");
    }
}

int main()
{
    inputInfo();
}
