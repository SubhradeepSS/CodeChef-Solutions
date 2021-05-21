#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		unordered_map<char, int> mp;
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
			mp[s[i]]++;
		while (q--)
		{
			int c;
			cin >> c;
			long long int s = 0;
			for (auto it = mp.begin(); it != mp.end(); it++)
			{
				if (it->second - c > 0)
					s += it->second - c;
			}
			cout << s << endl;
		}
	}
	return 0;
}
