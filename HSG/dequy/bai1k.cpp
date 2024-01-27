//tong cac chu so chan cua so nguyen duong: 14326, tong la 4+2+6 = 12
#include<bits/stdc++.h>
//khai bao bien
int tongchan_kdq(int n){
    int s=0;
    while(n!=0){
        int du=n%10;
        n=n/10;

        if(du%2==0){
            s+=du;
        }
    }
    return s;
}

int tongchan(int n) {
    if (n == 0) {
        return 0;
    } else {
        int du = n % 10;
        int sum = (du % 2 == 0) ? du : 0;
        return sum + tongchan(n / 10);
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"so luong chu so: "<<tongchan(1)<<endl;
    cout<<"so luong chu so: "<<tongchan(12)<<endl;
    cout<<"so luong chu so: "<<tongchan(123)<<endl;
    cout<<"so luong chu so: "<<tongchan(1234)<<endl;
    cout<<"so luong chu so: "<<tongchan(14326)<<endl;

    return 0;
}