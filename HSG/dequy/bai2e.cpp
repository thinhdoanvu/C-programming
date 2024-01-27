//tim UCLN(a,b)
#include<bits/stdc++.h>

//khai bao bien

int UCLN(int a, int b){
    if(a==b){
        return a;
    }
    return (a>b)?(UCLN(a-b,a)):(UCLN(a,b-a));
}


//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"UCLN(8,12)="<<UCLN(8,12);
    return 0;
}