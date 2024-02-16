#include <bits/stdc++.h>
using namespace std;

#define n 3
#define k 3

int a[n] = {1, 2, 3};
int res[k];
int p[n] = {0};

void inmang(int m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}

void thu(int i){
    if (i == k) {
        inmang(res, k);
        return;
    }

    for (int j = 0; j < n; j++) {
        inmang(p,n);
        if (p[j] == 0){
            res[i] = a[j];
            p[j] = 1;
            thu(i + 1);
            p[j] = 0;
        }
    }
}


int main()
{
    thu(0);
    return 0;
}
