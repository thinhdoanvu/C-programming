//chinh hop lap: liet ke day nhi phan n bit
//n=3, k=3: 000 001 010 011 100 101 110 111
#include<bits/stdc++.h>
//khai bao bien
#define n 2 //bit tuong ung: (0,1) hoac (4,5) ... liet ke cac day so trong khoang nay
#define k 3 //so phan tu/bit can liet ke: k=3: 000 010... 444 445 455 ...
int a[n]={0,1};
int res[k];//mang ket qua co so phan tu = k

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void thu(int i){
    //cout<<"i: "<<i<<endl;
    if(i==k){
        inmang(res,k);
        return;
    }

    for(int j=0; j<n; j++){
        cout<<"i:"<<i<<", j: "<<j<<endl;
        res[i]=a[j];
        thu(i+1); 
    }
}

//chuong trinh chinh
int main(){
    thu(0);

    return 0;
}