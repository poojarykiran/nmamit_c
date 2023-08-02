#include <stdio.h>


int main() {
    int rows, cols;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


 int arr[rows][cols];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i % 2 == 0 && j % 2 == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = (i % 2 != 0 && j % 2 != 0) ? 1 : -1;
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 1)
                printf("1 ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
