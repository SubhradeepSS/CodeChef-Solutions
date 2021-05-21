#include <iostream>
#include <math.h>
using namespace std;

bool power_2(int n)
{
	return (
		(n > 0) && !(n & (n - 1)));
}

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (power_2(n))
		{
			n = log(n) / log(2);
			int ans = 0;
			while (power_2(n))
			{
				ans++;
				n = log(n) / log(2);
			}
			cout << ans << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}
