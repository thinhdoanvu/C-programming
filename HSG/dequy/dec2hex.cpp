//doi so thap phan sang hexa
#include<bits/stdc++.h>
//khai bao bien
void dec2hex(int n){
    if(n<16){
        if(n<10){
            cout<<n;
        }
        else{
            cout<<static_cast<char>(55+n);//11 = A = 65 = 55+10
        }
    }
    else{
        dec2hex(n/16);
        int du=n%16;
        if(du<10){
            cout<<du;
        }
        else{
            cout<<static_cast<char>(du+55);
        }
    }
}

//chuong trinh chinh
int main(){
    dec2hex(762);
    return 0;
}