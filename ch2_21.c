//SUM OF ARITHMETIC PROGRESSION SERIES 

#include <stdio.h>
int main()
{
	int d,n,f,a=0,sum=0;
	scanf("%d",&n);
	scanf("%d",&d);
	scanf("%d",&f);
	for(int i=0;i<n;i++)
	{
		a=a+d;
		sum=sum+a;
	}
	printf("%d",sum);
	return 0;
}
