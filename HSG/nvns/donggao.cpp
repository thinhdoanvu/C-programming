#include <iostream>
using namespace std;
int solve(int n, int a, int b){
    for(int x = n / b, y = n % b; x >= 0; --x){
        if(y % a == 0){
            return x + y / a;
        }
        y += b;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    cout << solve(n, 3, 5);
    return 0;
}
