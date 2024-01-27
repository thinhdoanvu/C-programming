//dem so luong chu so cua 1 so nguyen duong: 24319, dap an = 5
#include<bits/stdc++.h>
//khai bao bien
int demchuso(int n){
    if(n/10==0){
        return 1;
    }
    else{
        return 1+ demchuso(n/10);
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cout<<"so luong chu so: "<<demchuso(1)<<endl;
    cout<<"so luong chu so: "<<demchuso(12)<<endl;
    cout<<"so luong chu so: "<<demchuso(123)<<endl;
    cout<<"so luong chu so: "<<demchuso(1234)<<endl;
    cout<<"so luong chu so: "<<demchuso(74980)<<endl;

    return 0;
}