//cho truoc chuoi co do dai <=10, in ra cac hoan vi cua chuoi
//vi du: s="ABA", in ra cac hoan vi cua S
#include<bits/stdc++.h>
#define max 10

//khai bao bien
int n;
string S = "ABA";
char res[max];
int p[max];

struct chuoi{
    string value;
};

struct chuoi des[max];
int dem=0;

void thu(int i){
    if(i==n){
        //cout<<res<<endl;
        //luu vao mang des
        des[dem++].value=res;
        return;
    }
    //tim cac nghiem con
    for(int j=0; j<n; j++){
        if(p[j]==0){
            res[i]=S[j];
            p[j]=1;
            thu(i+1);
            p[j]=0;
        }
    }
}

bool comp(chuoi a, chuoi b){//cho biet la sap xep chuoi
    return a.value < b.value;
}

//chuong trinh chinh
int main(){
    n=S.length();
    //khoi tao mang p
    for(int i=0; i<n; i++){
        p[i]=0;
    }
    thu(0);
    //sap xep mang des
    sort(des, des+dem, comp);
    //loai bo cac chuoi trung nhau
    for(int i=0; i<dem; i++){
        if(des[i].value != des[i+1].value){
            cout<<des[i].value<<endl;
        }
    }
    return 0;
}