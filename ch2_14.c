//odd numbers between intervals

#include<stdio.h>
int main(void)
{
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<0 && b<0)
	{
		printf("plz enter a positive number");
	}
	else
	{
		for(i=a+2;i<b;i+=2)
		
		{
			if(i%2==1)
			printf("%d ",i);
		
		}
	}
	return 0;
}
