//Tim day con dai nhat co tong bang 0
//N=5: 2, 1, -2, 3, -2
//day con dai nhat: 1 -2 3 -2
#include<bits/stdc++.h>
//khai bao bien
int n;
int a[]={2,1,-2,3,-2};
int s[1000]={0};
int dem=0;

void inday(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void taos(int m[], int size){
    s[0]=0;
    for(int i=0; i<size; i++){
        s[i+1]=s[i]+m[i];
    }
    inday(s,size);
}

void thu(){
    int start;
    int stop;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(s[i] == s[j]){
                cout<<"i = "<<i<<", j= "<<j<<endl;
                start=j;
                stop=i;
            }
        }
    }
    //in ra day so
    for(int k=start; k<stop; k++){
        cout<<a[k]<<" ";
    }
}

//chuong trinh chinh
int main(){
    n=sizeof(a)/sizeof(a[0]);
    cout<<"day a: ";
    inday(a,n);
    cout<<"day s: ";
    n++;
    taos(a,n);
    thu();
    return 0;
}