//liet ke cac hoan vi tu 1 - n voi do dai k cho truoc
//vi du: n=3, k=2: 12 13 21 23 31 32
#include<bits/stdc++.h>

//khai bao bien
int n=3;
int k=3;
int c[3];//danh sach cac so 1-3 dung de hoan vi
int x[3];//cac cap so hoan vi

void in(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void lietke(int i) {
    if(i==k){
        in(x,k);
    }
    else{
        for(int j=1; j<=n; j++){
            if(c[j-1]==0){//so chua dung
                x[i]=j;
                c[j-1]=1;//so da dung
                lietke(i+1);
                c[j-1]=0;//so da dung
            }
        }
    }
}

//chuong trinh chinh
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    //khoi tao gia tri cho mang c chua cac so 1 2 3
    //neu chua dung thi danh dau c[i]=0, da dung = 1
    for(int i=0; i<n; i++){
        c[i]=0;
    }
    lietke(0);

    return 0;
}
