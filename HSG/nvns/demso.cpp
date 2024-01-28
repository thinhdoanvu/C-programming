#include <bits/stdc++.h>
// khai bao bien
int test;
int page[1000];
int digit[100000][10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // 0 1 2 3 4 5 6 7 8 9

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // nhap du lieu
    cin >> test;

    for(int i=0; i<test; i++){
        cin >> page[i];
    }
    
    for (int j = 0; j < test; j++)
    {
        // kiem tra cac chu so
        for (int i = 1; i <= page[j]; ++i)
        {
            int x = i;
            while (x != 0)
            {
                int du = x % 10;
                digit[j][du]++;
                x /= 10;
            }
        }
    }

    // in ra mang digit
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << digit[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}