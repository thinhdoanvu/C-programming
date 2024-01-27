#include <stdio.h>
#define INPUT "minesweeper.inp"
#define MAX_COL 24
#define MAX_ROW 30

char toado[MAX_ROW][MAX_COL]; // Adjust the array dimensions

int col, row;
FILE *fp;

void readfile() {
    fp = fopen(INPUT, "r");
    if (fp == NULL) {
        printf("File not found\n");return;
    } else {
        fscanf(fp, "%d", &row);
        fscanf(fp, "%d", &col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                fscanf(fp, " %c", &toado[i][j]); // Note the space before %c to skip spaces and newlines
            }
        }
    }
    printf("%d %d\n", row, col);
    fclose(fp);
}

void inboard() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", toado[i][j]);
        }
        printf("\n"); // Print a newline after each row
    }
}

int main() {
    readfile();
    inboard();
    return 0;
}
