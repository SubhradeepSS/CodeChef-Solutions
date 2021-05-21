#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if ((n - 1) % 4)
			cout << "BOB" << endl;
		else
			cout << "ALICE" << endl;
	}
	return 0;
}
