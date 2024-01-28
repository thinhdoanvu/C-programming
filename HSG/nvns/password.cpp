#include <bits/stdc++.h>
using namespace std;

// khai bao bien
int k;
FILE *fp;
string s, num_string;
string password;

void readdata()
{
    getline(cin, s);
    k = stoi(s);
    getline(cin, s);
    // chuyen cac dang ky tu so vao chuoi num_string de xu ly
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num_string.push_back(s[i]); // chuyen cac ky tu so vao num_string
        }
    }
    // in ra cac gia tri de kiem tra
    cout << k << endl;
    for (int i = 0; i < num_string.length(); i++)
    {
        cout << num_string[i];
    }
}

void processing()
{
    cout << endl << "Chuoi password can tim: " << endl;
    int L, len;
    // xac dinh chieu dai cua chuoi
    L = num_string.length();
    len=L;
    //cout << endl << L << endl;
    if (k == L)
    {
        cout << "Password = " << num_string << endl;
    }
    else
    {
        int start = 0;
        while(k<L){
            //tim ra so lon nhat [start..finish]
            int finish = L-k;
            char max = num_string[start];
            int index = start;
            cout << "L= " << L << " k = "<< k << " start = " << start << " finish = " << finish+start << endl;
            for(int i=start; i<=finish+start; i++){
                if(max < num_string[i]){
                    max = num_string[i];
                    index=i;
                }
            }
            start=index+1;
            cout << "index = " << index << endl;
            cout << "max = " << max -48 << endl;
            //luu so lon nhat vao chuoi password
            password+=max;
            L=len-index-1;//L bot di so luong ky tu
            k--;//bot di chieu dai cua password
        }
        //khi k>=L thi in ra phan con lai
        //cout << num_string.substr(start,k);
        //luu phan con lai vao mang password
        password+=num_string.substr(start,k);
        cout << password << endl;
    }
}

void checkpassword(){
    string rever_res = password;
    reverse(rever_res.begin(), rever_res.end());
    cout << "Chuoi dao nguoc: "<< rever_res << endl;
    if(password == rever_res){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main()
{
    // tang toc do doc du lieu
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // doc du lieu
    readdata();
    // xu ly
    processing();
    //check password
    checkpassword();
    return 0;
}
