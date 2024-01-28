#include<bits/stdc++.h>
#define MAX 100

//khai bao bien toan cuc
int a[]={1,2,5,26,7,14,3,6,12};
int N=9;

void in(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
}

void quicksort(int L, int R){
    int i=L;
    int j=R;
    int x=a[(L+R)/2];
    while(i<=j){
        while(a[i]<x){
            i++;
        }
        while(a[j]>x){
            j--;
        }
        if(i<=j){
            int tam=a[i];
            a[i]=a[j];
            a[j]=tam;
            i++;
            j--;
        }
    }
    if(L<j){
        quicksort(L,j);
    }
    if(R>i){
        quicksort(i,R);
    }
}

//chuong trinh chinh
int main(){
    cout<<"mang chua sap xep: ";
    in(a,N);
    cout<<endl;
    quicksort(0,N-1);
    cout<<"mang sau khi sx tang: ";
    in(a,N);
    return 0;
}