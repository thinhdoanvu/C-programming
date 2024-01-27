//tim vi tri cua phan tu co gia tri lon nhat
#include<bits/stdc++.h>

//khai bao bien
int a[]={3,1,2,5,7,8,4,9,6,0};
int n=10;

int max(int a, int b){
    return (a>b)?a:b;
}

int SLN(int m[], int size){
    if(size==0){
        return m[0];
    }
    else{
        return max(m[size],SLN(m,size-1));
    }
}

int posmax(int m[], int size){
    if(size==0){
        return 0;
    }
    int pos=posmax(m,size-1);
    return (m[size]>m[pos])?size:pos;
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"So lon nhat: "<<SLN(a,n-1)<<endl;
    cout<<"Vi tri SLN: "<<posmax(a,n-1);

    return 0;
}