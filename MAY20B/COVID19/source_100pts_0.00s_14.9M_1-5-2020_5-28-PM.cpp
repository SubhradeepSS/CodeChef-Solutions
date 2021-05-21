#include <bits/stdc++.h>
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
		int a[n];
		vector<int> v;
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int l = 1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] - a[i - 1] <= 2)
				l++;
			else
			{
				v.push_back(l);
				l = 1;
			}
		}
		v.push_back(l);
		cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << endl;
	}
	return 0;
}
