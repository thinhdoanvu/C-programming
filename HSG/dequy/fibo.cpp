#include<bits/stdc++.h>
//khai bao bien

void fibo(int n){
    int f0=0;
    int f1=1;
    cout<<f0<<" "<<f1<<" ";    
    for(int i=0; i<n; i++){
        int sum=f0+f1;
        cout<<sum<<" ";
        f0=f1;
        f1=sum;
    }
}

//in ra so fibo thu n
//f(0) = 0, f(1) = 1
//f(2) = f(1)+f(0)
//f(n) = f(n-2) + f(n-1), n>1
int fibo_th(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo_th(n-1) + fibo_th(n-2);
    }
}
//chuong trinh chinh
int main(){
    fibo(5);
    cout<<endl<<"fibo thu 6 la: "<<fibo_th(5);
    return 0;
}