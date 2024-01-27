//tinh tong S=1/(1+1/(1+1/(...1/(1+1/(1+1)))))))
#include<bits/stdc++.h>
//khai bao bien

float tong(int n){
    if(n==1){
        return 1.0/(1+1);
    }
    else{
        return 1.0 / (1 + tong(n - 1));
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"tong = "<<tong(1)<<endl;
    cout<<"tong = "<<tong(2)<<endl;
    cout<<"tong = "<<tong(3)<<endl;
    cout<<"tong = "<<tong(4)<<endl;

    return 0;
}