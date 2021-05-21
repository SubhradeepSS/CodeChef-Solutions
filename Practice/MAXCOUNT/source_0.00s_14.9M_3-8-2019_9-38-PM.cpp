#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], c[10001] = {0};
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			c[a[i]]++;
		}
		int max = c[1], index = 1;
		for (int i = 2; i < 10001; i++)
		{
			if (c[i] > max)
			{
				max = c[i];
				index = i;
			}
		}
		cout << index << " " << max << endl;
	}
	return 0;
}
