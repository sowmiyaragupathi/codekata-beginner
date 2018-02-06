//distance between 2 players 

#include<stdio.h>
int main(void)
{
	int a,b,ans;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		ans=a-b;
		printf("%d",ans);
	}
	else
	{
		ans=b-a;
		printf("%d",ans);
	}

	return 0;
}
