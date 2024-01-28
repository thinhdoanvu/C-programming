#include <bits/stdc++.h>
// khai bao bien
int t, n;
int m[10000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // read data
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        cin >> n;
        //nhap day con
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        // tim day con
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                if ((m[j] >= 0 && m[j - 1] < 0) || (m[j] < 0 && m[j - 1] >= 0))
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            cout << cnt << " ";
        }
    }

    return 0;
}