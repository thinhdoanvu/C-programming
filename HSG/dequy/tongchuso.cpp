//tinh tong cac chu so cua so
#include<bits/stdc++.h>
//khai bao bien
int countnumber(int n){
    if(n<10){
        return 1;
    }
    else{
        int count=1;
        return count += countnumber(n/10);
    }
}

int sumnumber(int n){
    if(n<10){
        return n;
    }
    else{
        int s = n%10;
        return s += sumnumber(n/10);
    }
}


//chuong trinh chinh
int main(){
    cout<<"so luong chu so: "<<countnumber(123456)<<endl;
    cout<<"tong cac chu so: "<<sumnumber(123456);
    return 0;
}