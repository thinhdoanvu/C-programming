//S=1/(1*2)+ 1/(2*3) + 1/(3*4) +...+1/(n*(n+1))
#include<bits/stdc++.h>

float tong(int n){
    if(n==1){
        return 0.5;
    }
    else{
        return ((float)1/(n*(n+1)) + tong(n-1));
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