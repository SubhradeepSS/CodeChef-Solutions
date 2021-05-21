#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// your code goes here
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		long long int a[n], c = 0, f = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > 2)
				c++;
			else if (a[i] == 2)
				f++;
		}
		cout << c * (c - 1) / 2 + c * f << endl;
	}
	return 0;
}
