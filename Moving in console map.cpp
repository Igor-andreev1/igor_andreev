#include <conio.h>
#include <stdio.h>
#include <windows.h>

int x[2] = { 0,0 }; //        x[height,width]
const int n = 20, m = 20; //  n - height; m - width
int tab[n][m];  //            main map


/// 
/// Filling a two-dimensional array
/// 
void  fill_map()
{
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                tab[i][j] = char(45);
            }
        }
        tab[x[0]][x[1]] = char(219);

}


/// 
/// Printing a two-dimensional array
/// 
void print_map()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("                                                                                 ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", tab[i][j]);
            if (j == (m-1))
            {
                printf("\n");
                printf("                                                                                 ");
            }
        }
    }
}


/// 
/// Reads the pressing of the arrows and does not allow you to go beyond the border
/// 
void move()
{
    int code = _getch();
    if (code == 0 || code == 224)
        code = _getch();
    switch (code)
    {
    case 75:
        if (x[1]==0)
        {
            move();
        }
        x[1] = x[1] - 1; //влево
        break;
    case 77:
        if (x[1] == (m-1))
        {
            move();
        }
        x[1] = x[1] + 1; //вправо
        break;
    case 72:
        if (x[0] == 0)
        {
            move();
        }
        x[0] = x[0] - 1; //вверх
        break;
    case 80:
        if (x[0] == (n-1))
        {
            move();
        }
        x[0] = x[0] + 1; //вниз
        break;
    }
    fill_map();
    system("cls");
    print_map();
    move();
}

/// 
/// Simple :)
/// 
int main()
{
        fill_map();
        print_map();
        move();
}
