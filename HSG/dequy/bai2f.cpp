//Kiem tra xau doi xung
#include<bits/stdc++.h>
//khai bao bien
char S[]="12321";

int comp(char d, char c){
    return (d==c)?1:0;
}

int doixung(char *xau){
    int i=0;
    int j=strlen(S)-1;
    while(i<j){
        if(S[i]==S[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int doixung_dq(char *xau, int i, int j){
    if(i>=j){
        return 1;
    }
    if(xau[i]==xau[j]){
        return doixung_dq(xau, i+1, j-1);
    }
    else{
        return 0;
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"Xau doi xung KDQ: "<<doixung(S)<<endl;
    cout<<"Xau doi xung DQ: "<<doixung_dq(S,0,strlen(S)-1)<<endl;
    return 0;
}