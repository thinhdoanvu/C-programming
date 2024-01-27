//tinh tong S=x + x^2/2! + x^3/3! +..+x^n/n!
#include<bits/stdc++.h>
//khai bao bien
int gt(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*gt(a-1);
    }
}
//KHONG THE SU DUNG HAM TINH TONG NHU THE NAY
float tong(int x, int n){
    if(n==1){
        return x;
    }
    else{
        return pow(x,n)/gt(n) + pow(x,n-1)/gt(n-1);
    }
}

//HAY DUNG HAM NAY
float tong2(int x, int n){
    float result = 0.0;
    for (int i = 1; i <= n; ++i) {
        result += pow(x, i) / gt(i);
    }
    return result;
}
//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"tong= "<<tong2(1,1)<<endl;
    cout<<"tong= "<<tong2(1,2)<<endl;
    cout<<"tong= "<<tong2(1,3)<<endl;
    cout<<"tong= "<<tong2(1,4)<<endl;
    //KET QUA SAU LA SAI
    cout<<"tong= "<<tong(1,1)<<endl;
    cout<<"tong= "<<tong(1,2)<<endl;
    cout<<"tong= "<<tong(1,3)<<endl;
    cout<<"tong= "<<tong(1,4)<<endl;
    return 0;
}