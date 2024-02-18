//Cho truoc xau S, sinh ra cac xau con cua S bang cach xoa di mot so cac ky tu
//S="aba": a b a ab ba aa aba. Trong do, a a chi duoc tinh 1 lan

#include<bits/stdc++.h>
using namespace std;

// khai bao bien
string S = "aba";
int n;
char res[15];
int p[15] = {0};
int dem = 0;

struct chuoi {
    string value;
};

struct chuoi des[15];

void tachchuoi(int i, int k) {
    if (i == k) {
        res[i] = '\0'; //them ky tu ket thuc chuoi
        des[dem++].value = res; //luu res vao mang des
        //cout << "res: " << res << endl;
        return;
    }

    for (int j=0; j<n; j++){
        if (p[j] == 0) {
            res[i] = S[j];
            p[j] = 1;
            tachchuoi(i + 1, k);
            p[j] = 0;
        }
    }
}

//so sanh 2 chuoi theo thu tu tu dien
bool compare(chuoi a, chuoi b) {
    return a.value < b.value;
}

// chuong trinh chinh
int main(){
    n = S.length();
    for (int k = 1; k < n; k++) {
        tachchuoi(0, k);
    }
    //them xau ket thuc = S
    des[dem++].value=S;

    //in ra cac xau con tu mang des
    for (int i = 0; i < dem; i++) {
        cout << des[i].value << endl;
    }

    //sap xep cac xau con theo thu tu tang dan
    sort(des,des+dem, compare);

    //in ra cac xau con tu mang des
    cout<<"chuoi con sau khi sap xep: "<<endl;
    for (int i = 0; i < dem; i++) {
        cout << des[i].value << endl;
    }

    //chi in ra cac chuoi con sau khi loai bo trung lap
    cout<<"ket qua: "<<endl;
    for(int i=0; i<dem; i++){
        if(des[i].value!=des[i+1].value){
            cout<<des[i].value<<endl;
        }
    }
    return 0;
}
