#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        a[n] = a[n - 1];
        int start = 0;
        for(int i = 0; i < n; ++i){
            if((a[i] < 0 && a[i + 1] < 0) || (a[i] >= 0 && a[i + 1] >= 0)){
                for(int j = i - start + 1; j >= 1; --j){
                    cout << j << " ";
                }
                start = i + 1;
            }
        }
        cout << endl;
    }
    return 0;
}