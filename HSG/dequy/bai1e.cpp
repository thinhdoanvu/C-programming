//S=(x,n)=x^1 + x^2 + ...+x^n
#include<bits/stdc++.h>

int tong(int x, int n){
    int S=0;
    if(n==1){
        return x;
    }
    else{
        return pow(x,n) + tong(x,n-1);
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"tong: "<<tong(2,1)<<endl;
    cout<<"tong: "<<tong(2,2)<<endl;
    cout<<"tong: "<<tong(2,3)<<endl;
    cout<<"tong: "<<tong(2,4)<<endl;
    return 0;
}