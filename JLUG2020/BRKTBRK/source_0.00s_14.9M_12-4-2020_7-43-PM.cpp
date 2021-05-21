#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, w1, w2, w3;
		cin >> n >> w1 >> w2 >> w3;
		if (w1 + w2 + w3 <= n)
			cout << 1 << endl;
		else if (w1 + w2 <= n || w2 + w3 <= n)
			cout << 2 << endl;
		else
			cout << 3 << endl;
	}
	return 0;
}
