Xem lai bai toan quay lui se thay khi n>10 se bung no to hop  
khong the giai duoc trong huu han thoi gian va huu han vung nho  
nhan xet: de buoc so buoc co n = 10  
phuong an n=10: con lai (1/2 buoc) + n=9  
phuong an n=9: con lai (1/2 buoc) + n=8  
//... phuong an n=1: 1 buoc, n=2 hoac =1 hoac bang 2  

```
#include<bits/stdc++.h>
using namespace std;
vector <long long> f;

int step = 5;

int thu(int n){
    if(f[n]!=-1){
        return f[n];
    }
    if(n<=2){
        return f[n]=n;
    }
    return f[n]=thu(n-1)+thu(n-2);
}

int main(){
    cin>>step;

    //khoi tao f la cac buoc cau thang
    for(int i=0; i<step; i++){
        f.push_back(-1);
    }

    thu(step-1);

    //in ket qua so luong cach di chuyen
    // for(int i=0; i<step; i++){
    //     if(f[i]!=-1){
    //         cout<<f[i]<<" ";
    //     }
    // }

    //in ket qua cuoi cung
    cout<<"So cach buoc: "<<f[step-1];
    
    return 0;
}
```
```
9 - 34; 6 - 13; 14 - 610; 3 - 3; 12 - 233; 8 - 21
5 - 8; 18 - 2584; 7- 13; 11- 144
```
