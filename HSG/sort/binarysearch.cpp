#include<bits/stdc++.h>
#define N 10
//khai bao bien
int a[]={8,0,1,10,7,9,3,2,6,5};

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

void sort(int L, int R){
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
            swap(&a[i],&a[j]);
            i++;
            j--;
        }
    }
    if(L<j){
        sort(L,j);
    }
    if(R>i){
        sort(i,R);
    }
}

void search(int k, int L, int R){
    int mid=(L+R)/2;
    if(a[mid] == k){
        cout<<"tim thay k tai vi tri: "<<mid<<endl;
    }
    else{
        if(k<a[mid]){
            search(k,L,mid);
        }
        else{
            search(k,mid,R);
        }
    }
}

void search2(int k, int L, int R){
    while(L<=R){
        int mid=(L+R)/2;
        if(a[mid] == k){
            cout<<mid;
            return;
        }
        if(a[mid]<k){
            L=mid+1;
        }
        else{
            R=mid-1;
        }
    }
    cout<<"not found";
}

//chuong trinh chinh
int main(){
    sort(0,N-1);
    inmang(a,N);
    //search(4,0,N);
    search2(4,0,N);
    return 0;
}