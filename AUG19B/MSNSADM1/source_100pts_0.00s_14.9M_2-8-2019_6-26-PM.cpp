#include <iostream>
#include <vector>
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
		int a[n], b[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			if (20 * a[i] - 10 * b[i] > 0)
				v.push_back(20 * a[i] - 10 * b[i]);
			else
				v.push_back(0);
		}
		cout << *max_element(v.begin(), v.end()) << endl;
		;
	}
	return 0;
}
