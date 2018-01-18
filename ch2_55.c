//product of 2 numbers is even/odd  number
#include<stdio.h>
int main(void)
{
	int n,m,temp;
	scanf("%d",&n);
	scanf("%d",&m);
	temp=n*m;
	temp=temp%2;
	if(temp==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	return 0;
}
