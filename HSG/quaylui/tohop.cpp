//tinh chap k cua n
//n=1,2,3,4, k=2: (1,2), (1,3), (1,4), (2,3), (2,4), (3,4)
//loai bo cac cap so giong nhau
#include<bits/stdc++.h>
#define n 4
#define k 2

//khai bao bien
int a[n]={1,2,3,4};
int p[n]={0};//mang danh dau: 0-chua dung, 1-da dung
int res[k];

void inmang(int m[], int size)
{
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void thu(int i){
    int dem=0;
    res[dem++]=a[i];

    for(int j=i+1; j<=n; j++){
        if(dem<k){
            res[dem++]=a[j];
        }
        else{
            inmang(res,dem);
            dem=0;
            res[dem++]=a[i];
            res[dem++]=a[j];
        }
    }
    if(i<n){
        thu(i+1);
    }
}

//chuong trinh chinh
int main(){
    thu(0);
    return 0;
} 