Cho mảng các số nguyên, hãy in ra màn hình vị trí của số lớn nhất trong mảng
```
#include <iostream>
using namespace std;

int a[]={1,4,3,6,8,9,2,7};
//ket qua: 5

int n;

int tongdq(int a[],int n, int k){
    int s=0;
    if(n==0){
        if(a[n]>k){
            s=a[n];
        }
        return s;
    }
    //tim cac nghiem de quy
    if(a[n]>k){
        s=a[n];
    }
    return s+tongdq(a,n-1,k);
}

int main()
{
    n=sizeof(a)/sizeof(a[0]);
    k = 5;
    cout<<"tong la: "<<tongdq(a,n,k);
    return 0;
}
```
