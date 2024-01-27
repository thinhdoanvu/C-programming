#include<bits/stdc++.h>
//khai bao bien
int N=10;
int a[]={9,1,3,6,5,4,6,8,5,9};

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<"  ";
    }
}

void sort(int L, int H){
    int i=L;
    int j=H;
    int x=a[(L+H)/2];
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
        sort(L,j);
    }
    if(H>i){
        sort(i,H);
    }
}

void phanbiet(){
    int dem=0;
    for(int i=0; i<N; i++){
        if(a[i]!=a[i+1]){
            dem++;
        }
    }
    cout<<endl<<"so chu so phan biet: "<<dem<<endl;
}

int phanbiet_dq(int a[], int N){
    if(N==0){
        return 1;
    }
    else{
        int dem=(a[N]!=a[N-1])?1:0;
        return dem+phanbiet_dq(a,N-1); 
    }
}

int max_dup(int a[], int n){
    int max=1;
    int dem=1;
    for(int i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            dem++;
        }
        else{
            dem=1;
        }
        max=(dem>max)?dem:max;
    }
    return max;
}

//chuong trinh chinh
int main(){
    inmang(a,N);
    sort(0,N-1);
    cout<<endl<<"Day sau khi sap xep: ";
    inmang(a,N);
    cout<<endl<<"so phan biet: "<<phanbiet_dq(a,N-1);
    cout<<endl<<"max duplicate: "<<max_dup(a,N);
    return 0;
}