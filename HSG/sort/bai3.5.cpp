//liet ke tat ca phan so trong khoang tu 0-1 cua N
//sap xep theo thu tu tang dan, dua ra phan so thu k
//F(5)=0/1 1/5 1/4 1/3 2/5 1/2 3/5 2/3 3/4 4/5 1/1
//k=5: 2/5 k=6:1/2 k=7:3/5
//luu y: 2 phan so bang nhau thi chi duoc in 1 lan


#include<bits/stdc++.h>
//khai bao bien
int N;
int p[100];
int q[100];
int dem=0;
//de giam do phuc tap cua thuat toan, su dung mang danh dau de loai bo phan tu trung lap
int stat[100]={0};

void inps(){
    for(int i=0; i<dem; i++){
        cout<<p[i]<<"/"<<q[i]<<endl;
    }
}

void lapps(int n){
    int tu=0;
    int mau=1;
    
    p[dem]=0;
    q[dem]=1;
    dem++;
    for(int i=1; i<n; i++){
        for(int j=1; j<=n; j++){
            if(i<j){
                p[dem]=i;
                q[dem++]=j;
            }
        }
    }
    //in phan so cuoi cung
    p[dem]=1;
    q[dem++]=1;
    inps();
}

void sortps(int n){
    for(int i=0; i<dem-1; i++){
        for(int j=i+1; j<dem; j++){
            if(1.0*p[i]/q[i] > 1.0*p[j]/q[j]){
                int tam=p[i];
                p[i]=p[j];
                p[j]=tam;
                tam=q[i];
                q[i]=q[j];
                q[j]=tam;
            }
        }
    }
    cout<<"phan so sau khi sap xep"<<endl;
    inps();
}

void removeps(int n){
    cout<<"phan so sau khi loai bo trung lap"<<endl;
    for(int i=0; i<dem-1; i++){
        if(1.0*p[i]/q[i] == 1.0*p[i+1]/q[i+1]){
            stat[i]=1;
        }
    }
    
    //in ra day khong trung lap
    for(int i=0; i<dem; i++){
        if(stat[i]==0){
            cout<<p[i]<<"/"<<q[i]<<endl;
        }
    }
}

void psthu(int k, int n){
    int count=0;
    int i;
    for(i=0; i<dem; i++){
        if(stat[i]==0 && count<k){
            count++;
        }
        if(count==k){
            break;
        }
    }
    //vi tri tim thay so k tai i
    cout<<"phan so thu "<<k<<" la: "<<p[i]<<"/"<<q[i];
}

void F(int n){
    lapps(n);
    sortps(n);
    removeps(n);
    psthu(7,n);
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    F(5);
    return 0;
} 