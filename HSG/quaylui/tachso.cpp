#include<bits/stdc++.h>
//Khai bao bien
int n = 6;
int x[100];
int t[100];

//in day so x
void in(int m[], int size) {
    for (int i = 1; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
}

// Ham thu
void thu(int i) {
    for (int j = x[i - 1]; j <= (n - t[i - 1]) / 2; j++) {
        x[i] = j;
        t[i] = t[i - 1] + j;
        thu(i + 1);
    }
    x[i] = n - t[i - 1];
    in(x,i+1);
}

// Chuong trinh chinh
int main() {
    x[0] = 1;
    t[0] = 0;
    thu(1);
    return 0;
}