//cho truoc 1 xau chi bao gom cac so 0-9 (do dai <10) va so nguyen M
//Hay dat dau - + vao xau S de thu duoc ket qua la M
//vi du: M=4, s="123": -1+2+3

void inmang(int m[], int size);
void sinhdau(int i);
int kiemtra();
void inketqua(int res[], int size);

#include<bits/stdc++.h>
int n;
string s = "123456789";
int a[]={0,1,2};//khong co dau, dau +, dau -
int res[10];//toi da co 10 dau + hoac - hoac khong co dau (de cho toi da la 10)
int M;

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void sinhdau(int i){
    if(i==n){
        if(kiemtra()==1){
            inmang(res,i);
            inketqua(res,i);
        }
        return;//phai co nha
    }
    for(int j=0; j<3; j++){//so luong cac ky tu trong mang a
        if (i == 0 && j != 0) {
            continue;  // Chỉ chấp nhận dấu - hoặc không có dấu ở vị trí đầu tiên
        }
        res[i]=a[j];
        sinhdau(i+1);
    }
}

int kiemtra(){
    int tong=0;
    int so=0;
    int dau=1;
    for(int i=0; i<n; i++){
        if(res[i]==0){//khong phai + hoac -
            so=so*10+int(s[i])-48;//doi ky tu thanh so
        }
        if(res[i]==1){//dau +
            tong=tong+dau*so;//tong+(1)*3
            so=int(s[i])-48;
            dau=1;
        }
        if(res[i]==2){//dau -
            tong=tong+dau*so;
            so=int(s[i])-48;
            dau=-1;
        }
    }
    tong=tong+dau*so;
    if(tong==M){
        //cout<<tong<<endl;
        return 1;
    }
    return 0;
}

void inketqua(int res[], int size){//
    for(int i=0; i<size; i++){
        if(res[i]==0){
            cout<<s[i];
        }
        if(res[i]==1){
            cout<<"+"<<s[i];
        }
        if(res[i]==2){
            cout<<"-"<<s[i];
        }
    }
    cout<<endl;
}

int main(){
    n=s.length();//chieu dai cua chuoi thuc te
    //M=1;//khong co
    //M=-4;//1-2-3
    //M=6;//1+2+3
    //M=15;//12+3
    M=185;
    //M=15;
    sinhdau(0);
    return 0;
}