#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,c;
scanf("%d",&t);
while(t--){
c=1;
scanf("%d",&n);
for(int i=2;i*i<=n;i++)
{
if(n%i==0)
{
c=2;break;
}
}
if(c==2)
printf("no\n");
else 
printf("yes\n");
}
	return 0;
}

