// Giai ma chu viet cua nguoi Maya
// cho truoc g = 4, w = "cAda"
// cho truoc n=11, s = "AbrAcadAbRa"
// hoi kha nang xuat hien cac hoan vi cua w trong s
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

// khai bao bien
int g = 4;
int n = 11;
char w[3000] = "cAda";
char s[3000000] = "AbrAcadAbRa";
int demtu = 0;

void sort()
{
    for (int i = 0; i < g; i++)
    {
        for (int j = i + 1; j < g; j++)
        {
            if (w[i] > w[j])
            {
                char tam = w[i];
                w[i] = w[j];
                w[j] = tam;
            }
        }
    }
}

void qsort(char x[], int L, int R)
{
    int i = L;
    int j = R;
    int mid = (L + R) / 2;
    while (i <= j)
    {
        while (x[i] < x[mid])
        {
            i++;
        }
        while (x[j] > x[mid])
        {
            j--;
        }
        if (i <= j)
        {
            char tam = x[i];
            x[i] = x[j];
            x[j] = tam;
            i++;
            j--;
        }
        if (L < j)
        {
            qsort(x, L, j);
        }
        if (i < R)
        {
            qsort(x, i, R);
        }
    }
}

void thu(int i)
{
    if (i < n - 3){
        char tam[3000] = "";
        int dem = 0;
        // tao ra mot xau phu
        for (int j = i; j < i+g; j++){
            tam[dem++] = s[j];
        }
        // sap xep xau tam theo thu tu tang dan
        qsort(tam, 0, dem - 1);
        //cout << "tam sau khi sap xep: " << tam << endl;
        // kiem tra xau tam co phai la hoan vi cua w khong
        int res = strcmp(w,tam);
        if (res == 0){
            demtu++;
        }
        thu(i + 1);
    }
    else{
        cout << demtu;
    }
}

// chuong trinh chinh
int main()
{
    // sap xep g
    qsort(w, 0, g - 1);
    //cout << "w sau khi sap xep: " << w << endl;
    // tim cac hoan vi cua w trong s: su dung cua so truot
    thu(0);
    return 0;
}