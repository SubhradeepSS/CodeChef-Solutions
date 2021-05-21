#include <stdio.h>

int main()
{
	int count, a, diff, times;
	scanf("%d", &times);
	count = 1; //loop counter
	a = 1;	   //series starting number
	diff = 10; //difference variable initialization

start: //label
	printf("%d ", a);
	a = a + diff;
	diff = diff + 10;
	count++;
	if (count <= times)
		goto start;

	return 0;
}