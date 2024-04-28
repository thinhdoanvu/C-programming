#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector< long long> f;
int n;//phan tu fibo thu n

long long fibo(int n){
    if(f[n]!=-1){
        return f[n];
    }
    if(n==0 || n==1){
        return f[n]=1;
    }
    return f[n] = fibo(n-1)+fibo(n-2);
}

//chuong trinh chinh
int main(){
    cout<<"Nhap n = ";
    cin>>n;
    //khoi tao danh sach cua f
    for(int i=0; i<n; i++){
        f.push_back(-1);
    }
    
    // for(int i=0; i<n; i++){
    //     cout<<f[i]<<" ";
    // }
    // cout<<endl;

    //di tim so fibonacci
    cout<<"so fibo thu "<<n<<" la: "<<fibo(n-1)<<endl;
    //in ket qua cac buoc da di chuyen
    for(int i=0; i<n; i++){
        if(f[i]!=-1){
            cout<<f[i]<<" ";
        }
    }
    return 0;

}