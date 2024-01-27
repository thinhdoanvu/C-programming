//tinh tong cac so duong co trong mang
#include<bits/stdc++.h>
//khai bao bien
int a[]={1,4,-1,-6,-2,0,5,9,8,7};

//tinh tong cac phan tu cua mang
int tongmang(int m[], int size){
    if(size==0){
        return m[0];
    }
    else{
        return m[size]+tongmang(m,size-1);
    }
}

//tinh tong cac phan tu duong cua mang
int tongduong(int m[], int size){
    int s=0;
    if(size==0){
        return s=(m[0]>0)?m[0]:0;
    }
    else{
        s=(m[size]>0)?m[size]:0;
        return s+=tongduong(m,size-1);
    }
}

//chuong trinh chinh
int main(){
    int N=sizeof(a)/sizeof(a[0]);
    cout<<"tong cac phan tu: "<<tongmang(a,N)<<endl;
    cout<<"tong cac so duong: "<<tongduong(a,N)<<endl;
    return 0;
}