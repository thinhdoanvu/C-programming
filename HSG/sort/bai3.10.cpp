//Cho n doan thang co diem xuat phat la x, do dai la d. Hay tim do dai doan bi phu tren truc so bowi cac doan thang tren
//vi du: x1=5, d=10, x2=0, d2=6, x3=-100, d3=10
//Ve cac doan nay ra ta de dang tinh duoc: l=25
#include<bits/stdc++.h>
//khai bao bien
struct doanthang{
    int x;
    int d;
};
int n;

struct doanthang dt[]={5,10,0,6,-100,10,-80,10,14,2};

void indt(int size){
    for(int i=0; i<size; i++){
        cout<<"("<<dt[i].x<<","<<dt[i].d<<")"<<endl;
    }
}

int compare(doanthang a, doanthang b){
    return a.x <= b.x;
}

void tinhtoan(int n){
    //sap xep doan thang theo x
    cout<<"dt sau khi sap xep: "<<endl;
    sort(dt, dt+n, compare);
    indt(n);
    //tinh toan do phu
    int l=dt[0].d;//do dai cua do phu
    int p = dt[0].x + dt[0].d;//vi tri bat dau doan mut
    cout<<"(p,l): "<<p<<", "<<l<<endl;

    for(int i=1; i<n; i++){
        if(p<=dt[i].x){
            l+=dt[i].d;//l khong doi trong truong hop co khe trong o giua (tu dt0 - dt1)
            p=dt[i].x + dt[i].d;
            cout<<"(p,l): "<<p<<", "<<l<<endl;
        }
        else{//2 doan thang nam de len nhau
            l=l-(p-dt[i].x)+dt[i].d;
            p=dt[i].x+dt[i].d;
            cout<<"(p,l): "<<p<<", "<<l<<endl;
        }
    }
    //in ra man hinh do dai cua l
    cout<<"do dai cua truc so bi che phu: "<<l;
}

//chuong trinh chinh
int main(){
    n=sizeof(dt)/sizeof(dt[0]);
    indt(n);
    tinhtoan(n);
    return 0;
}