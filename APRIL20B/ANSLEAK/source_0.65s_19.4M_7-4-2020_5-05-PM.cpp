#include <bits/stdc++.h>
using namespace std;

int main()
{
	//srand(time(NULL));
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{

		int n, m, k;
		cin >> n >> m >> k;
		int a[n][k];
		int ans[n];
		vector<int> v(m, 0);
		for (int i = 0; i < n; i++)
		{
			ans[i] = 0;
			for (int j = 0; j < k; j++)
			{
				cin >> a[i][j];
				v[a[i][j] - 1]++;
			}
			ans[i] = max_element(v.begin(), v.end()) - v.begin() + 1;
			fill(v.begin(), v.end(), 0);
		}
		for (int i = 0; i < n; i++)
			cout << rand() % m + 1 << " ";
		cout << endl;
	}
	return 0;
}
