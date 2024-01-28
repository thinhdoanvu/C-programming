//liet ke dayu nhi phan N bit
//3bit: 000 - 001 - 010 - 011 - ... - 111
//sao cho 2 so 1 khong dung canh nhau
#include<bits/stdc++.h>

//khai bao bien
int x[10];
int n = 3;

//in ra cac day co 2 so 1 khong dung canh nhau
int checkso1(int m[], int size){
    for(int i=0; i<size-1; i++){
        if(m[i]==1 && m[i+1]==1){
            return 1;
        }
    }
    return 0;
}

void in(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void lietke(int i) {
    if (i == n) {
        if(checkso1(x,n)==0){
            in(x, n);
        }
    } else {
        for (int j = 0; j <= 1; j++) {
            x[i] = j;
            lietke(i+1);
        }
    }
}

// Chương trình chính
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    lietke(0);

    return 0;
}
