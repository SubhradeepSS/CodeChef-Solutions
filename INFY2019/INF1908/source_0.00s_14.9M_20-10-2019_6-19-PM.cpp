#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n, k, t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int a = n / 10;
		cout << a * 10 + (k + n)<< endl;
	}
	return 0;
}
