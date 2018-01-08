//power of a number given a number and power
#include <stdio.h>
int main(void) 
{
	long int a,b,pow=1,i;
	scanf("%lu",&a);
	scanf("%lu",&b);
	if(a==0)
	{
		printf("%lu",a);
	}
	else if(b==0)
	{
		printf("%lu",pow);
	}
	else 
	{
		for(i=1;i<=b;i++)
		{
			pow=pow*a;
			
		}
		printf("%lu",pow);
	}

	return 0;
}
