#include <bits/stdc++.h>
// khai bao bien
int n;//so ngay theo doi bitcoin
int k;//so tien lai hang ngay

int main()
{
    ios::sync_with_stdio(stdin);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    int a[n];//gia tri cua bit coin theo ngay

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //di tim so tien loi toi da
    long long Max = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[i] - a[j] - (j - i) * k) { 
                Max = a[i] - a[j] - (j - i) * k; 
            }
        }
    }
    cout << Max;
    return 0;
}