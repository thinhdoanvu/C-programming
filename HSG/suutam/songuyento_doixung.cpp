//Cho a,b la chan tren va chan duoi cua day so
//in ra cac so nguyen to doi xung trong khoang a-b
//vi du: a=100, b=150: 101 131
#include<bits/stdc++.h>

//khai bao bien

int checknt(int x){
    if(x<2){
        return 0;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

bool checkdx(int x){
    char res[255];
    int len=0;
    while(x>0){
        int du = x%10;
        res[len++]=char(du+48);
        x=x/10;   
    }
    //kiem tra doi xung
    int i=0;
    int j=len-1;//chieu dai thuc te
    while(res[i]==res[j]){
        i++;
        j--;
        if(i>=j){
            return 1;
        }
    }
    return 0;
}

void doixung(int a, int b){
    for(int i=a; i<=b; i++){
        if(checknt(i)==1 && checkdx(i)==1){//i la so nguyen to va doi xung
            cout<<i<<" ";
        }
    }
}

//cach thu 2 chi danh rieng cho du lieu kieu so
int s;
int tachso(int x){
    if(x==0){
        return s;
    }
    int du=x%10;
    s=s*10+du;
    return tachso(x/10);
}

void doixung2(int a, int b){
    for(int i=a; i<=b; i++){
        if(checknt(i)==1 && tachso(i)==i){//i la so nguyen to va doi xung
            cout<<i<<" ";
        }
    }
}

//chuong trinh chinh
int main(){
    doixung(100,150);
    doixung2(100,150);
    return 0;
}
