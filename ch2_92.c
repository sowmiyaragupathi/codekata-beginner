//sum of all numbers given
#include <stdio.h>
int main(void)
{
	int a[100],i,sum=0,N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<N;i++)
	{
		sum=sum+a[i];
	}
       printf("%d",sum);
     return 0;
}
