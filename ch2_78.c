// given a number and print whether it is multiple of 13 or not
#include<stdio.h>
void main(void)
{
	int n;
	scanf("%d",&n);
	if(n%13==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
    return 0;
}
