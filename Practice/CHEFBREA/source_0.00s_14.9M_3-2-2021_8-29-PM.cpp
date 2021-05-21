#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int l, b;
		cin >> l >> b;
		int g = __gcd(l, b);
		cout << (l * b) / (g * g) << endl;
	}
	return 0;
}
