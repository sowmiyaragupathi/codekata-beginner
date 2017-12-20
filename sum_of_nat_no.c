#include <stdio.h>

int main(void) {
	int a,sum=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	
	printf("%d",sum);

	return 0;
}
