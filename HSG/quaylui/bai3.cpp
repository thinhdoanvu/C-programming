//liet ke dayu nhi phan N bit
//3bit: 000 - 001 - 010 - 011 - ... - 111
#include<bits/stdc++.h>
//khai bao bien
int x[10];
int n=3;

void in(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void lietke(int i){
    if (i == n) {
        in(x, n);
    } else {
        for (int j = 0; j <= 1; j++) {
            x[i] = j;
            lietke(i + 1);
        }
    }
}
//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    lietke(0);
    return 0;
}