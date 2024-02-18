//cho n=4, day a={1,2,3,6}
//in ra so be nhat khong thuoc tong cua cac ai
//cu the: m={1,2,3,6,3,4,5,6,7,8,9,10,11,12} => so be nhat = 13
#include<bits/stdc++.h>
#define n 4
#define max pow(2,n)

//khai bao bien
int x[n];//day nhi phan n bit
int a[n]={1,2,3,6};
int np[2]={0,1};
int dd[n];

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i];
    }
    cout<<endl;
}

void thu(int i){
    if(i==n){
        //inmang(x,n);
        //tinh tong cua m=ai*xi va danh dau cho dd[m]
        int m=0;
        for(int i=0; i<n; i++){
            m+=a[i]*x[i];
        }
        //gan dd[m]=1;
        dd[m]=1;
        inmang(dd,max);
        return;
    }
    //tim cac nghiem con
    for(int j=0; j<2; j++){
        x[i]=np[j];
        thu(i+1);
    }
}

//chuong trinh chinh
int main(){
    //khoi tao dd
    for(int i=0; i<max; i++){
        dd[i]=0;
    }
    //thu nghiem
    thu(0);
    //tim so be nhat trong khoang 1 - 2^n
    for(int i=1; i<max; i++){
        if(dd[i]==0){
            cout<<"so be nhat = "<<i<<endl;
            break;
        }
    }
    return 0;
}