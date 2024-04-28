#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int x[]={1,2};
int res[]={0};
int step=10;

void in(){
    int dem=sizeof(res)/sizeof(res[0]);
    for(int i=0; i<step; i++){
        if(res[i]!=0){
            cout<<res[i]<<" ";
        }
    }
    cout<<endl;
}

void thu(int idx, int s=0){
    if(s==step){
        in(); 
        return;
    }
    for(int i=0; i<2; i++){
        if(s<step){
            s+=x[i];
            res[idx]=x[i];
            thu(idx+1,s);
            res[idx]=0;
            s-=x[i];
        }
    }
}

int main(){
    // cout<<"nhap so bac thang: ";
    // cin>>step;
    thu(0,0);
}
//Khi so buoc tang len, ro rang quay lui khong the thuc hien duoc