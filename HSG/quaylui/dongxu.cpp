//cho truoc so luong dong cu: 1 3 5, so luong khong han che
//hay lay cac dong xu sao cho tong la 11

#include<bits/stdc++.h>
#include<iostream>
#define MAX 100

using namespace std;

int n = 11;
int x[3]={1,3,5};
int dem=0;
//danh cho quay lui
int res[MAX]={0};

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        if(m[i]!=0){
            cout<<m[i];
        }
    }
    cout<<endl;
}

void thu(int idx, int s=0){
    //thu het tat ca cac kha nang cua bai toan
    if(s==n){
        //cout<<dem<<endl;
        cout<<"s = "<<s<<", dem = "<<dem<<": ";
        inmang(res,dem);
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
    return 0;
}

/*
s = 11, dem = 11: 11111111111
s = 11, dem = 9: 111111113
s = 11, dem = 9: 111111131
s = 11, dem = 9: 111111311
s = 11, dem = 7: 1111115
s = 11, dem = 9: 111113111
s = 11, dem = 7: 1111133
s = 11, dem = 7: 1111151
s = 11, dem = 9: 111131111
s = 11, dem = 7: 1111313
s = 11, dem = 7: 1111331
s = 11, dem = 7: 1111511
s = 11, dem = 9: 111311111
s = 11, dem = 7: 1113113
s = 11, dem = 7: 1113131
s = 11, dem = 7: 1113311
s = 11, dem = 5: 11135
s = 11, dem = 7: 1115111
s = 11, dem = 5: 11153
s = 11, dem = 9: 113111111
s = 11, dem = 7: 1131113
s = 11, dem = 7: 1131131
s = 11, dem = 7: 1131311
s = 11, dem = 5: 11315
s = 11, dem = 7: 1133111
s = 11, dem = 5: 11333
s = 11, dem = 5: 11351
s = 11, dem = 7: 1151111
s = 11, dem = 5: 11513
s = 11, dem = 5: 11531
s = 11, dem = 9: 131111111
s = 11, dem = 7: 1311113
s = 11, dem = 7: 1311131
s = 11, dem = 7: 1311311
s = 11, dem = 5: 13115
s = 11, dem = 7: 1313111
s = 11, dem = 5: 13133
s = 11, dem = 5: 13151
s = 11, dem = 7: 1331111
s = 11, dem = 5: 13313
s = 11, dem = 5: 13331
s = 11, dem = 5: 13511
s = 11, dem = 7: 1511111
s = 11, dem = 5: 15113
s = 11, dem = 5: 15131
s = 11, dem = 5: 15311
s = 11, dem = 3: 155
s = 11, dem = 9: 311111111
s = 11, dem = 7: 3111113
s = 11, dem = 7: 3111131
s = 11, dem = 7: 3111311
s = 11, dem = 5: 31115
s = 11, dem = 7: 3113111
s = 11, dem = 5: 31133
s = 11, dem = 5: 31151
s = 11, dem = 7: 3131111
s = 11, dem = 5: 31313
s = 11, dem = 5: 31331
s = 11, dem = 5: 31511
s = 11, dem = 7: 3311111
s = 11, dem = 5: 33113
s = 11, dem = 5: 33131
s = 11, dem = 5: 33311
s = 11, dem = 3: 335
s = 11, dem = 5: 35111
s = 11, dem = 3: 353
s = 11, dem = 7: 5111111
s = 11, dem = 5: 51113
s = 11, dem = 5: 51131
s = 11, dem = 5: 51311
s = 11, dem = 3: 515
s = 11, dem = 5: 53111
s = 11, dem = 3: 533
s = 11, dem = 3: 551
*/
