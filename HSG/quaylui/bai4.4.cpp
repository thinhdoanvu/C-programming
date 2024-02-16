//hay liet ke cac xau con co do dai = n (n<20), sao cho khong co BB dung canh nhau
//n=4: AAAA AAAB AABA ABAA ABAB BAAA BAAB BABA
#include<bits/stdc++.h>

//khai bao bien
string S="AB";
char res[]="";
int n=4;
int k;

void inkq(){
    cout<<res<<endl;
}

bool check(){
    for(int i=0; i<strlen(res); i++){
        if(res[i]=='B' && res[i+1]=='B'){
            return false;
        }
    }
    return true;
}

void thu(int i){
    if(i==n){
        if(check()==true){
            inkq(); 
        }
        return;
    }

    //tim cac nghiem con
    for(int j=0; j<k; j++){
        res[i]=S[j];
        thu(i+1);
    }
}

//chuong trinh chinh
int main(){
    k=S.length();
    thu(0);
    return 0;
}