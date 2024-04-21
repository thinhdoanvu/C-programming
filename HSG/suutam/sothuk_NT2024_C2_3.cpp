//cho truoc k la so thu tu cua mang bao gom cac chu so co the chia het 3 hoac 5 hoac 7
//in ra so do.
//k=17 so dau tien: 3  5  6  7  9  10  12  14  15  18  20  21  24  25  27  28  30
#include<bits/stdc++.h>

vector <unsigned long long> f;
unsigned long long k;

void init(){
    for(int i=3; i<=105; i++){
        if(i%3==0 || i%5==0 || i%7==0){
            f.push_back(i);
        }
    }
    //in vector
    // for(int i=0; i<f.size(); i++){
    //     cout<<f[i]<<" ";
    // }
    // cout<<endl;
}

int thu(unsigned long long k){
    if(k<=57){
        //vi X chia het cho ca 3 so 3,5,7 nen 105 so dau tien co 57 so co the chia het cho 3 || 5 || 7
        return f[k-1];
    }
    //so can tim >57 so dau tien
    return 105+thu(k-57);
}

int main(){
    cin>>k;
    init();
    cout<<"so can tim: "<<thu(k);
}
