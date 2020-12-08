#include <stdio.h>

#define M 8
#define N 10

int matrix[M][N] = {
             { 0, 0, 0, -1, -1, -1, -1, -2, -2, -2 },
             { 3, 3, 3, 3, 2, 2, 2, 1, 1, 1 },
             { 6, 6, 6, 5, 5, 5, 5, 4, 4, 4 },
             { 9, 9, 8, 8, 8, 8, 7, 7, 7, 7 },
             { 12, 12, 12, 12, 11, 11, 11, 10, 10, 10 },
             { 16, 16, 16, 15, 15, 14, 14, 14, 13, 13 },
             { 19, 19, 19, 18, 18, 18, 17, 17, 17, 17 },
             { 22, 22, 22, 21, 21, 21, 20, 20, 20, 20 } };

int main(void) {
    int row = 0, key;
    printf("Input your key: ");
    scanf_s("%d", &key);
    if (key < -2 || key > 22) {
        printf("Your key doesn't exist in matrix");
        return 0;
    }
    while (row < 8) {
        int low = 0, high = 9, mid = (low + high) / 2;
        while (low <= high) {
            if (matrix[row][mid] == key) {
                printf("Found key at coord [%d, %d]\n", row, mid);
                break;
            }
            else if (matrix[row][mid] > key) {
                low = mid + 1;
            }
            else if (matrix[row][mid] < key) {
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        row++;
    }
    return 0;
}