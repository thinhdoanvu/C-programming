//so sieu nguyen to la so nguyen to, neu bo di bat ky so nao o cuoi lan luot cung deu la so nguyen to
//vi du: 2333 la SNT (2333 233 23 3 2 deu la so nguyen to)
//cho truoc n<10, in ra so SNT co n chu so
//n=4: 2333 2339 2393 2399 2939 3119 3137 3733 3739 3793 3797 5939 7193 7331 7333 7393
#include<bits/stdc++.h>
#define n 4

//khai bao bien
int res[n];

int checknt(int x){
    if(x<2){
        return 0;
    }
    if(x==2 || x==3){
        return 1;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

void inmang(int m[], int size){
    for(int i=0; i<n; i++){
        cout<<res[i];
    }
    cout<<endl;
}

void thu(int i, int so){
    if (i == n) {
        inmang(res, n);
        return;
    }
    for (int j = 0; j <= 9; j++) {
        if (checknt(so * 10 + j) == 1) {
            res[i] = j;
            thu(i + 1, so * 10 + j);
        }
    }
}

//chuong trinh chinh
int main(){
    thu(0,0);
    return 0;
}