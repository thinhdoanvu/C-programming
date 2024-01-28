// tim so tu nhien be nhat con thieu trong day so
#include <bits/stdc++.h>
#define MAX 100

// khai bao bien
int input[] = {0,2,1,9,5,6,7,6}; // day so can kiem tra
int c[MAX];                             // mang luu tan suat xuat hien cua cac so nguyen
int n;                                  // so phan tu thuc su cua day so input: 10
int k;                                  // cac chu so co trong day input: 0 - 8

void inmang(int m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}

void thu()
{
    int max = input[0];
    int min = input[0];
    n = sizeof(input) / sizeof(input[0]);
    for (int i = 1; i < n; i++)
    {
        max = (max < input[i]) ? input[i] : max;
        min = (min > input[i]) ? input[i] : min;
    }
    k = max - min + 1;
    cout << "min=" << min << ",max=" << max << ",k=" << k << endl;
    if(min > 0) {
        cout << "So tu nhien nho nhat con thieu: 0";
    } else {
        for(int i = 0; i < k; i++) {
            c[i] = 0;//reset mang dem
        }

        for(int i = 0; i < n; i++) {
            c[input[i] - min]++;
        }

        inmang(c, k);

        for(int i = 0; i < k; i++) {
            if(c[i] == 0) {
                cout << "So tu nhien nho nhat con thieu: " << i ;
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    thu();
    return 0;
}