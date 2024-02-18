//cho n<10, hay liet ke cac cach dat dau () dung dan
//vi du: n=3: ()()(), ((())), ()(()), (())()
#include<bits/stdc++.h>
#define n 3

//khai bao bien
string s="()";

struct chuoi{
    string value;
};

struct chuoi des[1000];
int dem=0;
char res[2*n]="";//khi bao res de co the gan res[i]=s[j]

bool check(){
    //loai bo cac truong hop bat dau la ), hoac ket thuc la (
    if(res[0]==')' || res[strlen(res)-1]=='('){
        return false;
    }
    return true;
}

void thu(int i){
    if(i==2*n){
        //cout<<res<<endl;
        //loai cac truong hop bat dau la ) hoac ket thuc la (
        if(check()==true){
            //kiem tra dieu kien ngoac dung: ((())),...
            int count=0;
            for(int t=0; t<strlen(res); t++){
                if(res[t]=='('){
                    count++;
                }
                if(res[t]==')'){
                    count--;
                }
                if(count<0){
                    return;
                }
            }
            if(count==0){
                des[dem++].value=res;
            }
        }
        return;
    }
    //sinh ra cac nghiem con
    for(int j=0; j<s.length(); j++){//sinh ra bieu tuong () co do dai = 6
        res[i]=s[j];
        thu(i+1);
    }
}

//chuong trinh chinh
int main(){
    thu(0);
    //in ra cac chuoi cua mang des
    cout<<"mang cac dau (): "<<endl;
    for(int i=0; i<dem; i++){
        cout<<des[i].value<<endl;
    }
    
    return 0;
}