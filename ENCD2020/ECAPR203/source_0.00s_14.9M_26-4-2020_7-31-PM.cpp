#include <iostream>
#include <math.h>
using namespace std;

long long int s(long long int n)
{
	long long int i = 1;
	while (i * i <= n)
	{
		i++;
	}
	if (i * i > n)
		return i - 1;
	return i;
}

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, a, b;
		cin >> n;
		long long int x = sqrt(1 + 8 * n);
		a = x - 1;
		a = a / 2;
		cout << n - (a * (a + 1) / 2) << endl;
	}
	return 0;
}
