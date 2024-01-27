#include <stdio.h>
#define MAX 100
#define INPUT "BFS.inp"

//khai bao prototype
void nhapdl();
void inmt(int m[MAX][MAX], int size);
int is_lienthong(int start);

// khai bao bien
int mtk[MAX][MAX];
int n;
FILE *fp;

void nhapdl()
{
    fp = fopen(INPUT, "r");
    if (fp == NULL)
    {
        printf("File not found");
        return;
    }
    fscanf(fp, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp,"%d",&mtk[i][j]);
        }
    }
    //in ra ma tran ke
    inmt(mtk,n);
    fclose(fp);
}

void inmt(int m[MAX][MAX], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d   ",m[i][j]);
        }
        printf("\n");
    }
}

int is_lienthong(int start){
    int OPEN[MAX];
    int visited[MAX];
    int dem=0;
    int check = 0;//khong co lien thong
    int spt=0;
    //khoi tao visited
    for(int i=0; i<n; i++){
        visited[i]=0;
    }
    OPEN[dem++]=start;
    while(dem>0){//con dinh trong danh sach OPEN
        int current = OPEN[--dem];//lay ra tu cuoi danh sach
        spt++;
        visited[current]=-1;
        if(check==0 && current==start){//chua lien thong va start = dinh ket thuc
            check =1;//do thi lien thong
            //tranh truong hop lay ra dinh dau tien = dinh cuoi cung
        }
        else{
            //cap nhat cac dinh ke vao OPEN
            for(int i=0; i<n; i++){
                if(mtk[current][i]==1 && visited[i]==0){//dinh chua xet
                    OPEN[dem++]=i;//chen vao cuoi danh sach
                }
            }
        }
    }
    return
}

// chuong trinh chinh
int main()
{
    nhapdl();
    printf("\nDo thi lien thong la: %d", is_lienthong(0));
    return 0;
}