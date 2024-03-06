#include <bits/stdc++.h>
#define start 0
#define MAX 20 // Maximum number of vertices
#define INPUT "tsp.inp"

using namespace std;

FILE *fp;
int n;
int C[MAX][MAX];
int x[MAX];    // thứ tự đường đi
int CLOSE[MAX]; // danh sách các đỉnh đã duyệt

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
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fp, "%d", &C[i][j]);
        }
    }
    fclose(fp);
    inmt(C, n);
}

void induongdi() {
    //phai co duong di tu diem cuoi cung ve diem xuat phat
    if (C[x[n - 1]][x[0]] > 0) {
        for (int i = 0; i < n; i++) {
            cout << x[i] << " -> ";
        }
        cout << x[0] << endl;//in lai diem xuat phat
    }
}

void thu(int idx) {
    //tim dinh lien ke dinh xuat phat
    if (idx == n - 1) { //neu duyet den dinh cuoi cung
        induongdi();
        return;
    }
    //tim cac nghiem thanh phan
    for (int i = 0; i < n; i++) { //duyet qua cac dinh ke tiep
        if (CLOSE[i] == 0 && C[x[idx]][i] > 0) {
            //dinh chua duyet CLOSE = 0
            //C[x[idx]][i] > 0: co duong di tu dinh hien tai -> dinh ke truoc
            x[idx+1] = i;//dinh can duyet = i
            CLOSE[i] = 1;//i: dinh da duyet
            thu(idx + 1);//duyet qua dinh ke tiep
            CLOSE[i] = 0;//reset lai dinh da duyet
        }
    }
}

int main() {
    readfile();
    init(CLOSE, n, 0);//cac thanh pho chua duyet
    init(x, n, -1);//duong di chua co
    CLOSE[start] = 1;//dinh xuat phat da duyet
    x[0] = start;//dinh xuat phat duoc dua vao danh sach dinh
    thu(0);//duyet tu dinh xuat phat
    return 0;
}
