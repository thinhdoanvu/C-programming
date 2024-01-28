//s="abcabefcegb"
//dem so ky tu trong chuoi va in ra man hinh tan suat xuat hien nhieu nhat
#include<bits/stdc++.h>
#include<string.h>

//khai bao bien
string s="abcabefcegb";
int c[100];//mang chua tan suat suat hien cua cac ky tu
int k;//so ky tu phan biet trong chuoi s

void demchar(){
    int n=s.length();
    char min=s[0];
    char max=s[n];

    for(int i=1; i<n; i++){
        min=(min>s[i])?s[i]:min;
        max=(max<s[i])?s[i]:max;
    }
    cout<<"min = "<<min<<", max = "<<max<<endl;
    //so ky tu co trong chuoi s
    k=int(max) - int(min) +1;
    cout<<"k = "<<k<<endl;
    //dem tan suat su dung dem phan phoi
    for(int i=0; i<n; i++){
        c[s[i] - min]++;
    }
    //in ra mang c
    char kt='a';
    for(int i=0; i<k; i++){
        cout<<char(kt+i)<<": "<<c[i]<<" "<<endl;
    }
    //tim so lon nhat trong mang c
    int ln=c[0];
    int posln=0;
    for(int i=1; i<k; i++){
        if(ln<c[i]){
            ln=c[i];
            posln=i;
        }
    }
    cout<<"ky tu xuat hien nhieu nhat la: "<<char(posln+'a')<<", solan: "<<ln;
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    demchar();
    return 0;
}