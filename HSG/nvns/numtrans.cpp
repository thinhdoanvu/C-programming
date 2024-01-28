#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX 1000
using namespace std;
int n;
string a[MAX];

int main(){
    //nhap n
    cin >> n;
    //nhap tung gia tri cho chuoi s
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    //hoan doi neu 2 ky tu ke nhau tao thanh so lon hon
    //vi du: 12 3 => 312 thay vi 123
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j] < a[j]+a[i]){
                swap(a[i],a[j]);
            }
        }
    }
    cout << endl <<"so tim duoc: ";
    for(int i=0; i<n; i++){
        cout << a[i] <<".";
    }
    //ket thuc chuong trinh
    return 0;
}