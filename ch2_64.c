// add 2 numbers and print either odd or even
#include <stdio.h>
int main(void)
{
	int a,b,add;
	scanf("%d",&a);
	scanf("%d",&b);
	add=a+b;
	if(add%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
    
   return 0;
}
