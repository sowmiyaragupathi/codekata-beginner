// diff 2 numbers and print either odd or even

#include <stdio.h>

int main(void)

{

	int a,b,diff;

	scanf("%d",&a);

	scanf("%d",&b);

	diff=a+b;

	if(diff%2==0)

	{

		printf("even");

	}

	else

	printf("odd");

    

   return 0;

}
