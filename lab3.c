#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SLEEP_TIME 10
#define COLUMN 80
#define ROW 24

int mtx[ROW][COLUMN] = { 0 };

void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMtx(int i, int j) {
    gotoXY(j, i);
    putchar('0');
}

int main() {
    int i;
    int j;
    int n = COLUMN;
    int m = ROW;
    int p;
 
    for (p = 0; p < m / 2; p++)
    {
        // влево
        for (j = n - 1 - p; j >= p; j--) {
            i = m - p - 1;
            printMtx(i, j);
            Sleep(SLEEP_TIME);
        }

        // вверх
        for (i = m - 1 - p; i >= p; i--) {
            j = p;
            printMtx(i, j);
            Sleep(SLEEP_TIME);
        }

        //вправо
        for (j = p ; j <= n - 1 - p; j++) {
            i = p;
            printMtx(i, j);
            Sleep(SLEEP_TIME);
        }

        //вниз
        for (i = p; i <= m - 1 - p; i++) {
            j = n - 1 - p;
            printMtx(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    gotoXY(0, m);
    return 0;
}