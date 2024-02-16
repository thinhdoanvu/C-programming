//liet ke day nhi phan n bit
//n=3: 000 001 010 ... 111
#include<bits/stdc++.h>
#define n 3
//khai bao bien
int a[]={0,1};
int res[n];
void inmang(){
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

void thu(int i){
    if(i==n){
        inmang();
        return;
    }

    //duyet cac cap nhi phan
    for(int j=0; j<2; j++){
        res[i]=a[j];
        thu(i+1);
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    thu(0);
    return 0;
}