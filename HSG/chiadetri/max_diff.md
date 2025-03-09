Cho một dãy n số nguyên a1, a2, ..., an. Hãy tìm hai chỉ số i, j sao cho i < j và hiệu aj - ai là lớn nhất.
input       output
===================
3
1 2 3       2
===================
4
2 5 1 3     3
===================
6 
4 2 5 8 1 7. 6

```
#include <iostream>
#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int a[MAX];
int n;
int maxdif, tam1, tam2;

void thu(int l, int r, int &maxdif, int &maxvalue, int &minvalue){
    int mid;
    int maxD1, maxV1, minV1;
    int maxD2, maxV2, minV2;
    if(l==r){
        maxdif=0;
        maxvalue=a[r];
        minvalue=a[r];
    }
    else{
        mid = (l+r)/2;
        thu(l, mid, maxD1, maxV1, minV1);
        thu(mid+1, r, maxD2, maxV2, minV2);
        maxdif = maxV2 - minV1;
        maxdif = (maxdif < maxD1) ? maxD1 : maxdif;
        maxdif = (maxdif < maxD2) ? maxD2 : maxdif;
        maxvalue = (maxV1 > maxV2) ? maxV1 : maxV2;
        minvalue = (minV1 < minV2) ? minV1 : minV2;
    }
}

int main(){
    //nhap mang a
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //in mang a
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    //giai thuat tim max(a[j] - a[i]), dieu kien i<j
    thu(0,n-1,maxdif,tam1, tam2);
    cout<<maxdif;
    return 0;
}
```
