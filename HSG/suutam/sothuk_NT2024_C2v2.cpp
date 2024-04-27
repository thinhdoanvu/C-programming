#include <iostream>
using namespace std;

int main()
{
	long long k;
	long long n, m;
	long long t, t1, i, j;

	cin>>k;
	n = k / 57;
	m = k % 57;

	t = n * 105;
	if (m > 0) 
	{
		for(i = 1; i <= 105; i++)
		{
			t1 = t+i;
			if (t1%3==0 || t1%5==0 || t1%7==0) m--;
			if (m==0) break;
		}
		t = t + i;
	}
	cout<<t;

    return 0;
}
