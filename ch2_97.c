// program for reverse a number
#include <stdio.h>
int main(void)
{
	int n,rev=0,temp;
	scanf("%d",&n);
	while(n!=0)
	{
	temp=n%10;
	rev=rev*10+temp;
	temp=temp/10;
	
	}
	printf("%d",rev);
  return 0;
}
