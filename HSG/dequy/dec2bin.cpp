//doi so thap phan sang nhi phan
#include<bits/stdc++.h>
//khai bao bien
void dec2bin(int n){
    if(n<2){
        cout<<n;
    }
    else{
        dec2bin(n/2);
        cout<<n%2;
    }
}

//chuong trinh chinh
int main(){
    dec2bin(3);
    return 0;
}