//cho truoc so luong dong cu: 1 3 5, so luong khong han che
//hay lay cac dong xu sao cho tong la 11, sao cho so luong dong xu be nhat
//n=11: 5 5 1 (3 dong) hoac 155
#include<bits/stdc++.h>
#include<iostream>
#define MAX 100

using namespace std;

int n = 11;
int x[3]={1,3,5};
int dem=0;
int iter=0;//so lan thuc hien toi da cua bai toan
//danh cho quay lui
int res[MAX]={0};
//danh cho nhanh can
int best=100;//so luong dong xu toi da 100
int bestsolution[MAX];//day cac dong xu o phuong an tot nhat

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        if(m[i]!=0){
            cout<<m[i];
        }
    }
    cout<<endl;
}

void arrcpy(int src[], int des[], int size){
    for(int i=0; i<size; i++){
        des[i]=src[i];
    }
}

void update(){
    if(best >= dem){//neu so dong xu > trang thai hien tai
        best = dem;
        arrcpy(res,bestsolution,dem);
        iter--;//neu khong co dieu kien nay thi iter=74
        //them dau = vao dieu kien best >=dem thi iter = 39
    }
}

void thu(int idx, int s=0){
    //thu het tat ca cac kha nang cua bai toan
    if(s==n){
        iter++;
        //cout<<"s = "<<s<<", dem = "<<dem<<": ";
        //inmang(res,dem);
        update();//cap nhat so dong xu toi da + mang toi uu
        return;
    }
    //tim cac nghiem thanh phan
    for(int i=0; i<3; i++){//truy xuat cac phan tu cua x
        if(s<n){
            s+=x[i];
            dem++;
            res[idx]=x[i];
            thu(idx+1,s);
            res[idx]=0;
            dem--;
            s-=x[i];
        }
    }
}

int main(){
    thu(0,0);
    cout<<"so lan thuc hien toi da: "<<iter<<endl;
    cout<<"Phuong an tot nhat: ";
    inmang(bestsolution,best);
    return 0;
}
