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
		int a[n], c[10001] = {0};
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			c[a[i]]++;
		}
		int count = c[1], max = 1;
		for (int i = 2; i <= 10000; i++)
		{
			if (c[i] > count)
			{
				count = c[i];
				max = i;
			}
		}
		cout << max << " " << count << endl;
	}
	return 0;
}
