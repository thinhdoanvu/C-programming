// tim day con co tong bang p
// 5 7 12 6 2 10 4, p=12
// ket qua: 5 7, 12, 2 10
#include <bits/stdc++.h>
// khai bao bien
int n;
int a[] = {12, 5, 7, 6, 6, 12, 2, 10, 4, 4, 4, 12};
int p = 12;
int m[100] = {0}; // mang danh dau phan tu nao da duoc dung cua mang a

void inmang(int mang[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << mang[i] << " ";
    }
    cout << endl;
}

void thu(int i)
{
    int s = 0;
    if(i==n-1){
        if(a[i]==p){
            cout<<endl<<a[i];
        }
        return;    
    }
    //reset mang m
    for(int t=0; t<n; t++){
        m[t]=0;
    }
    for (int j = i; j < n; j++){
        if (s < p){
            m[j] = 1;
            s += a[j];
        }
        else{
            if (s == p){
                cout << endl;
                for (int t = 0; t < n; t++){
                    if (m[t] == 1){
                        cout << a[t] << " ";
                    }
                }
                break;
            }
            else{//s>p
                break;
            }
        }
    }
    //het  for ma van ko co tong nao
    thu(i+1);
}

// chuong trinh chinh
int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    n = sizeof(a) / sizeof(a[0]);
    thu(0);
    return 0;
}