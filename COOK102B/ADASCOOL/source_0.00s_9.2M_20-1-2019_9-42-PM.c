#include <stdio.h>

int main(void)
{
	// your code goes here
	int t, n, m;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d%d", &n, &m);
		if (n * m % 2 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
