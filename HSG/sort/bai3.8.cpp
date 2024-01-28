// cho day so a1,a2,...,an. Tim X sao cho S=|a1-X|+|a2-X|+..+|an-X|=min
//3, 1, 5, 4, 5: X=4
//3, 1, 7, 2, 5, 7: X = 3, 4, 5

#include <bits/stdc++.h>
// khai bao bien
//int a[] = {3, 1, 5, 4, 5};
int a[] = {3, 1, 7, 2, 5, 7};
int X;
int n;

void inmang(int m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}

void qsort(int m[], int L, int R)
{
    int i = L;
    int j = R;
    int mid = (L + R) / 2;
    while (i <= j)
    {
        while (a[i] < a[mid])
        {
            i++;
        }
        while (a[j] > a[mid])
        {
            j--;
        }
        if (i <= j)
        {
            int tam = a[i];
            a[i] = a[j];
            a[j] = tam;
            i++;
            j--;
        }
    }
    if (j > L)
    {
        qsort(m, L, j);
    }
    if (i < R)
    {
        qsort(m, i, R);
    }
}

//sap xep su dung thu vien
int comp(int a, int b)
{
    return a > b;
}

void timx(){
    if(n%2!=0){
        cout<<"X = "<<a[n/2];
    }
    else{
        cout<<"X = ";
        for(int i=a[n/2-1]; i<=a[n/2]; i++){
            cout<<i<<",";
        }
    }
}

// chuong trinh chinh
int main()
{
    n = sizeof(a) / sizeof(a[0]);
    inmang(a, n);
    qsort(a, 0, n-1);
    inmang(a,n);
    //sort(a,a+n,comp);
    //inmang(a, n);
    timx();
    return 0;
}