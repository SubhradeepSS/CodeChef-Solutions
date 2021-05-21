#include <iostream>
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
		char ch;
		string s;
		cin >> s;
		ch = s[0];
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] < ch)
				ch = s[i];
		}
		cout << ch << endl;
	}
	return 0;
}
