#include<stdio.h>
#include<bits/stdc++.h>
//khai bao bien
int N;

int is_SNT(int X){
    if(X==2 || X==3){
        return 1;
    } 
    else{
        for(int i=2; i<sqrt(X); i++){
            if(X%i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout<<"Nhap N = ";
    cin>>N;
    //dinh nghia M1C co N phan tu
    int arr[N];
    //khoi tao gia tri cho cac phan tu cua mang: gia su tat ca la SNT
    for(int i=0; i<=N; i++){
        arr[i]=0;
    }
    for(int i=2; i<=sqrt(N); i++){
        if(arr[i]==0){
            int j=i*i;
            //cout<<"+"<<j;
            while(j<N){
                arr[j]=1;
                j=j+i;
                cout<<","<<j;
            }
        }
    }
    
    //in ra cac phan tu cua mang
    cout<<endl;
    for(int i=2; i<=N; i++){
        if(arr[i]==0){
        cout<<i<<" ";
        }
    }
    return 0;
}