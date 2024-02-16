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

void thu(int i, int start){
    // cout<<"i: "<<i<<endl;
    if(i == k) {
        inmang(res, k);
        return;
    }

    for(int j = start; j < n; j++) {
        // cout<<"j: "<<j<<endl;
        if(p[j] == 0) {
            res[i] = a[j];
            p[j] = 1;
            thu(i + 1, j + 1);
            p[j] = 0;
        }
    }
}

//chuong trinh chinh
int main(){
    sort(a, a+n);//sap xep day so de dam bao cac so lay theo thu tu
    thu(0,0);
    return 0;
} 