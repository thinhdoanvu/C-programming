#include <bits/stdc++.h>

// khai bao bien
string s;

int main()
{
    // nhap chuoi ky tu tu ban phim
    getline(cin, s);
    // in ra chuoi vua nhap
    // cout<<s<<endl;
    // sap xep chuoi theo thu tu
    sort(s.begin(), s.end());
    // in ra chuoi sau khi sort
    cout << s << endl;
    // kiem tra cac ky tu canh nhau co == nhau
    int dem = 0;
    for(int i = 0; i < s.length(); i++){
        bool check = true;
        //khong phai la ky tu dau tien
        if(i -1 >= 0 && s[i]==s[i-1] ){
            check=false;
        }
        //khong phai la ky tu ket thuc
        if(i+1 <= s.length() && s[i]==s[i+1]){
            check = false;
        }
        //kiem tra de tang bien dem
        if(check){
            dem++;
        }
    }
    cout << dem;
    return 0;
}