#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int g, t, w;
	int test;
	cin >> test;
	while (test--)
	{
		cin >> g >> t >> w;
		int max_freq = max(g, max(t, w));
		int l = g + t + w;
		if (max_freq <= (l - max_freq + 1))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
