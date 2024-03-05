#include <bits/stdc++.h>

#define MAX 20 // Maximum number of vertices
#define INPUT "tsp.inp"
#define start 0
using namespace std;

FILE *fp;
int n;
int C[MAX][MAX];
int x[MAX];//thu tu duong di
int CLOSE[MAX];//danh sach cac dinh da duyet
int sum = 0;//tong chi phi
int best = INT_MAX;//chi phi tot nhat
int bestsolution[MAX];//duong di tot nhat
//dem so lan thuc hien de so sanh co/ko co dieu kien cat tia
int dem=0;

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
    //dieu kien la phai co duong di tu dinh cuoi cung - xuat phat
    if(C[x[n-1]][start] > 0){
        for (int i = 0; i < n; i++) {
            cout << x[i] << " -> ";
        }
        cout << start << " - sum: "<<sum + C[x[n-1]][start]<< endl;
        //sum: tong chi phi da di tu start -> n-1 + n-1 -> start
    }
}

void induongdi_best(){
    //dieu kien la phai co duong di tu dinh cuoi cung - xuat phat
    //if(C[bestsolution[n-1]][start] > 0){
        for (int i = 0; i < n; i++) {
            cout << bestsolution[i] << " -> ";
        }
        cout << start << " - best: "<<best << endl;
        //sum: tong chi phi da di tu start -> n-1 + n-1 -> start
    //}
}

void update() {
    if(sum + C[x[n-1]][start] < best){
        best = sum + C[x[n-1]][start];
        for(int i=0; i<n; i++){
            bestsolution[i]=x[i];//
        }
    }
}


void nhanhcan(int idx){
    //di tim cac dinh tiep theo sau dinh xuat phat
    //dieu kien nhanh can
    if(sum > best){
        return;
    }
    dem++;
    for (int i = 0; i < n; i++) {//duyet qua cac dinh ke tiep
        if (CLOSE[i] == 0 && C[x[idx-1]][i]>0){
            //dinh chua duyet CLOSE = 0
            //C[x[i-1]][i]>0: co duong di tu dinh hien tai voi dinh truoc do            
            x[idx] = i;
            CLOSE[i] = 1; //dinh i da duyet
            sum+=C[x[idx-1]][i];//tinh chi phi
            //dieu kien de duyet het cac dinh
            if (idx == n - 1) {//dieu kien toat quay lui
                //induongdi();
                update();
            }
            else{
                nhanhcan(idx+1);//duyet qua dinh ke tiep
            }
            CLOSE[i] = 0; //reset lai dinh da duyet
            sum-=C[x[idx-1]][i];//bo chi phi da tinh khi quay tro lai
        }
    }
}

void nhanhcan2(int idx){
    //di tim cac dinh tiep theo sau dinh xuat phat
    if (idx == n - 1){//neu duyet den dinh cuoi cung
        //induongdi();
        update();
        return;
    }
    //dieu kien cat tia
    if(sum > best){
        return;
    }
    dem++;
    //tim cac nghiem thanh phan
    for (int i = 0; i < n; i++) {//duyet qua cac dinh ke tiep
        if (CLOSE[i] == 0 && C[x[idx-1]][i]>0){
            //dinh chua duyet CLOSE = 0
            //C[x[i-1]][i]>0: co duong di tu dinh hien tai voi dinh truoc do            
            x[idx] = i;
            CLOSE[i] = 1; //dinh i da duyet
            sum+=C[x[idx-1]][i];//tinh chi phi
            nhanhcan(idx+1);//duyet qua dinh ke tiep  
            CLOSE[i] = 0; //reset lai dinh da duyet
            sum-=C[x[idx-1]][i];//bo chi phi da tinh khi quay tro lai
        }
    }
}

int main() {
    readfile();
    init(CLOSE, n, 0);//cac tp chua duyet
    init(x, n, -1);//duong di chua co - 1
    init(bestsolution,n,INT_MAX);
    CLOSE[start]=1;//dinh start da duyet (0)
    x[0]=start;//dinh xuat phat (0) duoc xuyet
    // nhanhcan2(1); //duyet tu dinh tiep theo = 1
    nhanhcan(1); //duyet tu dinh tiep theo = 1
    induongdi_best();//chi in ra 1 lan duy nhat khi tim duoc tot nhat
    cout<<"so lan thuc hien: "<<dem<<endl;
    //khi co dieu kien: 38
    //khi ko co dieu kien: 41
    return 0;
}
