//so hoan thien la so co tong cac uoc khong ke chinh no = chinh no
//6  1 + 2 + 3
//liet ke cac so hoan thien 1 - N (<1000)
#include<bits/stdc++.h>

//khai bao bien

int checkht(int x){
    int s=0;
    for(int i=1; i<x; i++){
        s+=(x%i==0)?i:0;
    }
    return (s==x)?1:0;
}

void in(int N){
    for(int i=1; i<N; i++){
        if(checkht(i)==1){
            cout<<i<<endl;
        }
    }
}

//chuong trinh chinh
int main(){
    in(1000);
    return 0;
}