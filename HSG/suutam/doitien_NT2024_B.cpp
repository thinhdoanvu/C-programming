//Cho truoc menh gia: 5 10 20
//Cho truoc so tien: 20
//Dem so cach doi: 5*4, 10*2, 20, 5*2+10
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector <long long> f;
int x[]={50,100,200};
int sotien = 100;

int thu(int amount){//so tien o trang thai hien tai
    //khoi tao f
    for(int i=0; i<=sotien; i++){
        f.push_back(0);//khong to tien nao duoc doi
    }
    f[0]=1;

    for(int i=0; i<3; i++){//tung menh gia
        for(int j=x[i]; j<=amount; j++){//duyet qua cac phuong an doi tien
            f[j]+=f[j-x[i]];
        }
    }
    return f[amount];
}

int main(){
    cin>>sotien;
    cout<<thu(sotien)<<endl;
}
