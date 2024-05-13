//Cho truoc dung luong cua N bai hat
//Hay su dung it dia nhat de ghi duoc cac bai hat vao dia
//Vi du:
//5 700
//320,100,300,560,50
//Ket qua: 2
//320 300 50
//100 560

#include<bits/stdc++.h>
using namespace std;

int M=700;
int BH[]={320,100,300,560,50};

int compare(int a, int b){
    return a>b;
}

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
}

void init(int m[], int size, int value){
    for(int i=0; i<size; i++){
        m[i]=value;
    }
}

int main()
{
    int sbh = sizeof(BH)/sizeof(BH[0]);
    //sap xep bai hat co dung luong theo thu tu giam dan
    sort(BH,BH+sbh,compare);
    cout<<"dung luong sau sap xep: ";inmang(BH,sbh);
    //tim so dia toi da
    int maxdia=0;
    int tongdl=0;
    for(int i=0; i<sbh; i++){
        tongdl+=BH[i];
    }
    maxdia = tongdl/M + 1;
    cout<<endl<<"so dia toi da can dung: "<<maxdia<<endl;
    //ghi dia
    int flag[sbh];//bai hat chua ghi vao dia
    init(flag,sbh,-1);
    //inmang(flag,sbh);cout<<endl;
    
    int dldia[maxdia]={0};
    
    for(int j=0; j<maxdia; j++){
        for(int i=0; i<sbh; i++){
            if(BH[i]+dldia[j]<M && flag[i]==-1){
                flag[i]=j;
                dldia[j]+=BH[i];
            }
        }
    }
    //cout<<"mang flag: ";inmang(flag,sbh);
    //cout<<endl<<"dung luong cac dia: ";inmang(dldia,maxdia);
    cout<<"cac bai hat duoc ghi vao dia: "<<endl;
    for(int i=0; i<maxdia; i++){
        cout<<"dia "<<i<<": ";
        for(int j=0; j<sbh; j++){
            if(flag[j]==i){
                cout<<BH[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
