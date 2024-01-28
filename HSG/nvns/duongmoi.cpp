#include <stdio.h>
#define INPUT "input.txt"
#define OUTPUT "output.txt"
#define MAX 1000

// Function prototypes
void readfile();
void writeout();
void printtoado(struct toado g[], int size);
void matranke();
void inmatran(int a[][MAX], int size);
int demlienthong();

// Global variables
int n,m;
FILE *fp;
int mtk[MAX][MAX];

struct toado {
    int x;
    int y;
};

struct toado td[MAX];

void readfile() {
    scanf("%d %d", &n, &m);  
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &td[i].x, &td[i].y);
    }
}

void matranke(){
    //khoi tao ma tran ke
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mtk[i][j]=0;
        }
    }
    for(int i=0; i<m; i++){
        if(td[i].x !=0 && td[i].y !=0){
            mtk[td[i].x-1][td[i].y-1]=1;
        }
    }
    //in ra ma tran ke
    inmatran(mtk,n);
}

void inmatran(int a[][MAX], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}

void printtoado(struct toado g[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d %d\n", g[i].x, g[i].y);
    }
}

int demlienthong(){
    int dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mtk[i][j]!=0 && mtk[j][i]==0){
                dem=dem+2;
            }
            if(mtk[i][j]!=0 && mtk[j][i]!=0){
                dem=dem+1;
            }
            
        }
    }
    return dem;
}

int main() {
    readfile();
    //printtoado(td, m);
    matranke();
    demlienthong();
    printf("%d",demlienthong()-m);
    return 0;
}
