#include <stdio.h>
#define INPUT "input.txt"
#define OUTPUT "output.txt"
#define MAX 200000

// Function prototypes
void readfile();
void writeout();
void printtoado(struct toado g[], int size);

// Global variables
int n,m;
FILE *fp;

struct toado {
    int x;
    int y;
};

struct toado td[MAX];

void readfile() {
    fp = fopen(INPUT, "r");
    if (fp == NULL) {
        return;
    }

    fscanf(fp, "%d %d", &n, &m);  
    for (int i = 0; i < m; i++) {
        fscanf(fp, "%d %d", &td[i].x, &td[i].y);
    }
    fclose(fp);
}

void printtoado(struct toado g[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d %d\n", g[i].x, g[i].y);
    }
}

long int totalline(){
    long int dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dem++;
        }
    }
    return dem;
}

void writeout() {
    fp = fopen(OUTPUT, "w");
    if (fp == NULL) {
        return;
    }
    fprintf(fp,"%ld",totalline()-n-m);
    fclose(fp);
}

int main() {
    readfile();
    printtoado(td, m);
    writeout();
    return 0;
}
