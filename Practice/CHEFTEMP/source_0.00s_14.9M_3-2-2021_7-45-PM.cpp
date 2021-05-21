#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int a[7];
	for (int i = 0; i < 7; i++)
	{
		cin >> a[i];
	}
	int x;
	int ans = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> x;
		ans += abs(x - a[i]);
	}
	cout << ans;
	return 0;
}
