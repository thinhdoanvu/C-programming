#include<bits/stdc++.h>
#define N 10

//khai bao bien
int a[]={22,21,2,7,5,8,15,17,12,9};//2 5 7 8 9 12 15 17 21 22
int k=3;

void swap(int *x, int *y){
    int tam=*x;
    *x=*y; 
    *y=tam;
}

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
}

void mink_bsort(){
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(a[i] > a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
    cout<<"mang sau sx: ";
    inmang(a,N);
    cout<<endl<<"so be thu "<<k<<" la: "<<a[k-1];
}

//chuong trinh chinh
int main(){
    mink_bsort();
    return 0;
}