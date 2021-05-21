#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		long long int m;
		cin >> m;
		cout << __builtin_popcountll(m) - 1 << endl;
	}
	return 0;
}
