The series \( S \) is given by:
S = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n)
```
#include<bits/stdc++.h>
using namespace std;

//khai bao bien
int sum(int x){
    if(x==1){
        return 1;
    }
    return x + sum(x-1);
}

float tong(int n){
    if(n==1){
        return 1.0;
    }
    else{
        int ms=sum(n);
		return 1.0/(ms) + tong(n-1);
    }
}

int main(){
    cout<<tong(1)<<endl;
    cout<<tong(2)<<endl;
    cout<<tong(3)<<endl;
    cout<<tong(4)<<endl;
    return 0;
}
```
