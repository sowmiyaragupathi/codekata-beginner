//calculator program
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a;
	long int n1,n2,i;
	for(i=0;i<4;i++)
	scanf("%ld %c %ld",&n1,&a,&n2);
	if(a=='/')
	{
	printf("%ld\n",n1/n2);
	}
	else
	{
	printf("%ld\n",n1%n2);
	}
	return 0;
}
