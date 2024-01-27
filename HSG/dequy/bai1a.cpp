//S=1^2 + 2^2 + .. + n^2
#include<bits/stdc++.h>

int tong(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*n + tong(n-1);
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"tong: "<<tong(1)<<endl;
    cout<<"tong: "<<tong(2)<<endl;
    cout<<"tong: "<<tong(3)<<endl;
    cout<<"tong: "<<tong(4)<<endl;
    return 0;
}