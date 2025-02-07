// Cho một dãy n số nguyên a1, a2, ..., an. Hãy tìm dãy con đơn điệu dài nhất
/*
input.       
===================
10
5 2 3 4 9 10 5 6 7 8
===================
output
2 3 4 5 6 7 8
===================
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int a[MAX];
int n;

void inmang(int m[MAX], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ////tao mang a
    cin>>n;
    n=n+2;//them 2 phan tu dau va cuoi
    a[0]=INT_MIN;//phan tu dau tien vo cung be
    for(int i=1; i<n-1; i++){//vi tri tu 1 - n
        cin>>a[i];
    }
    a[n-1]=INT_MAX;//phan tu cuoi cung vo cung lon
    ////in mang a
    inmang(a,n);
    //giai thuat
    int L[MAX];//luu giu do dai cua chuoi con
    int T[MAX];//luu giu vi tri cua phan tu lon nhat
    L[n-1]=1;
    for(int i=n-2; i>=0; i--){
        int jmax = n-1;
        for(int j=i+1; j<n; j++){
            if(a[j] > a[i] && L[j]>L[jmax]){
                jmax = j;
            }
            // cout<<"L[jmax] = "<<L[jmax]<<endl;
            L[i] = L[jmax] + 1;
            T[i] = jmax;
        }
    }
    //in ra day L va T
    cout<<"L[]: "; inmang(L,n);
    cout<<"T[]: "; inmang(T,n-1);
    //so phan tu cua day con:
    cout<<L[0]-2<<endl;
    //in ra day con tang dai nhat
    int i=T[0];
    while (i != n-1){
        cout<<a[i]<<" ";
        i=T[i];
    }
    
    return 0;
}
