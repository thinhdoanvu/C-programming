Cho truoc n to tien co menh gia khac nhau:  
In ra tong so tien co the co tu n to tien tren  
n=4, 4 2 5 2 => 2 4 5 6 7 8 9 11 13  
```
#include <bits/stdc++.h>
#include <limits.h>
#define MAX 100
using namespace std;

void nhap(int a[MAX], int &n){ //array auto update data without &
    cout<<"n = "; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void in(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

int timmin(int m[], int size){
    int m_min = INT_MAX; //money min
    
    for(int i=0; i<size; i++){
        m_min = (m_min > m[i])?m[i]:m_min;
    }
    return m_min;
}


int main()
{
    int a[MAX];
    int n;
    int sum=0;
   
    nhap(a,n);
    in(a,n);
    
    cout<<"menh gia nho nhat: "<<timmin(a,n)<<endl;;
    //tinh tong cac to tien
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    cout<<"tong tien lon nhat: "<<sum<<endl;
    
    int f[MAX];
    //tim tong cua menh gia
    f[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=sum; j>=a[i]; j--){
            if(f[j]!=1){//chua co so tien
                f[j]=f[j-a[i]];
            }
        }
    }
    cout<<"mangf: "; in(f,n*n);
    //in ra so tien
    int res[MAX];
    for(int i=1; i<=sum; i++){
        if(f[i]==1){
            res[i]=i;
        }
    }
    cout<<"mang res: "; in(res,sum+n);
    
    return 0;
}
```
