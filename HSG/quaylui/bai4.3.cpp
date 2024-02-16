//Cho xau S={'A'..'Z'}, liet ke cac hoan vi khac nhau cua xau cho truoc
//S="ABC": ABC ACB BAC BCA CAB CBA
#include<bits/stdc++.h>

//khai bao bien
string S="ABC";
int n;
char res[]="";
int p[]={0};

void inkq(){
    cout<<res<<endl;
}

void thu(int i){
    if(i==n){
        inkq();
        return;
    }

    //tim cac ket qua con
    for(int j=0; j<n; j++){
        if(p[j]==0){
            res[i]=S[j];
            p[j]=1;
            thu(i+1);
            p[j]=0;
        }
    }
}


//chuong trinh chinh
int main(){
    n=S.length();
    thu(0);
    return 0;
}