//xep 8 quan hau (xi, yi) len ban co 8*8 o sao cho:
//2 quan hau khong cung hang, cot va duong cheo
//cheo chinh: x1-y1=x2-y2
//cheo phu: x1+y1=x2+y2

#include<bits/stdc++.h>
using namespace std;

int hau[8] = {0, 1, 2, 3, 4, 5, 6, 7}; //mang chua vi tri cac cot cua quan hau
int n = 8;
bool ok;
int dem=0;

void inmang(int m[], int size) {
    cout<<dem++<<endl;
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
}

void thu(int i) {
    if (i == n) {
        //Khi xet du 8 quan hau
        inmang(hau, n);
        return;
    }

    for (int j = 0; j < n; j++) {//xet cac cot cua quan hau: c0-c7
        ok = true;
        for (int k = 0; k < i; k++) {//xet cac quan hau tai cac hang 0-i
            //kiem tra cac quan hau co cung cot,cung duong cheo
            if (hau[k] == j || i-j == k-hau[k] || i+j == k+hau[k]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            hau[i] = j;
            thu(i + 1);
        }
    }
}

//chuong trinh chinh
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    thu(0);
    
    return 0;
}
