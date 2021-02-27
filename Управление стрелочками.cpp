#include <conio.h>
#include <stdio.h>
#include <locale>
/// <summary>
/// Отображает вводимое значение "стрелочки"
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
            printf("влево");
            break;
        case 77:
            printf("вправо");;
            break;
        case 72:
            printf("вверх");;
            break;
        case 80:
            printf("вниз");;
            break;
        }
        _getch();
        system("cls");
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    inputInfo();
}