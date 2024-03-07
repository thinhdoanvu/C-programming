//cho truoc n thanh pho va 1 dinh xuat phat
//tim tat ca phuong an de co the xuat phat tu 1 thanh pho va quay tro ve thanh pho ban dau
//sao cho chi phi la be nhat
#include <bits/stdc++.h>

#define MAX 20 // Maximum number of vertices
#define INPUT "tsp.inp"
#define start 0
#define MAX 20

using namespace std;

FILE *fp;
int n;
int C[MAX][MAX];
int CLOSE[MAX];//mag danh dau cac dinh da duyet
int x[MAX];//mang luu tru duong di

//danh cho nhanh can
int bestsolution[MAX];
int sum=0;//chi phi hien tai cua duong di start->hientai
int best=INT_MAX;//chi phi tot nha = vo cung lon

//cac ham con
void copymang(int src[], int des[], int size){
    for(int i=0; i<size; i++){
        des[i]=src[i];
    }
}

void init(int a[], int size, int value) {
    for (int i = 0; i < size; i++) {
        a[i] = value; // Marking vertices as not visited
    }
}

void inmt(int a[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void readfile() {
    fp = fopen(INPUT, "r");
    if (fp == NULL) {
        cout << "File not found";
        return;
    }
    fscanf(fp, "%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fp, "%d", &C[i][j]);
        }
    }
    fclose(fp);
    inmt(C, n);
}

void induongdi(){
    for(int i=0; i<n; i++){
        cout<<x[i]<<"-> ";
    }
    //in dinh quay tro ve
    cout<<start;
}

void update(){
    if(sum+C[x[n-1]][start] < best){
        best = sum+C[x[n-1]][start];
        copymang(x,bestsolution,n);
    }
}

void thu(int idx){
    if(idx==n-1 && C[x[n-1]][start]>0){//so dinh duyet = n-1: duyet het tat ca cac dinh va phai co chu trinh quay ve dinh xuat phat
    //x[n-1]: dinh cuoi cung duoc duyet - luu trong mang x
        induongdi();
        cout<<" - sum: "<<sum+C[x[n-1]][start]<<endl;//in ra tong cua chi phi start - dinh ket thuc + quay ve
        update();//cap nhat gia tri cho best va duong di best
        return;
    }
    //dieu kien cat tia
    if(sum > best){
        return;
    }
    //tim cac nghiem con
    for(int i=0; i<n; i++){
        if(CLOSE[i]==0 && C[x[idx]][i]>0){//chua duyet va co duong di
            sum+=C[x[idx]][i];//tong chi phi tu start - idx - i
            x[idx+1]=i;//phan tu ke tiep cua idx = dinh da duyet
            CLOSE[i]=1;//danh dau dinh da duyet
            thu(idx+1);//quay lai dinh lien truoc
            CLOSE[i]=0;//coi nhu dinh vua quay lai la chua duyet
            sum-=C[x[idx]][i];//tong chi phi tu start - idx - i: tra lai do quay tro lai dinh truoc
        }
    }
}

int main() {
    readfile();
    init(CLOSE, n, 0);//cac tp chua duyet
    init(x, n, -1);//duong di chua co - 1
    init(bestsolution,n,-1);//khoi tao mang bestsolution

    //bat dau tu dinh xuat phat
    x[0]=start;//danh dau dinh dau tien duyet = start
    CLOSE[start]=1;//danh dau dinh start da duyet
    //lan thu dau tien
    thu(0);
    //in ra ket qua tot nhat
    cout<<"duong di tot nhat: "<<endl;
    for(int i=0; i<n; i++){
        cout<<bestsolution[i]<<"-> ";
    }
    //in dinh quay tro ve
    cout<<start<<" - best: "<<best;
    return 0;
}
