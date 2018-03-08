//find the sum of k natural number
#include <stdio.h>
int main(void)
{
 long int n,sum=0;
 int i;
 scanf("%ld", &n);
 for (i = 1; i <=n; ++i)
 {
 	sum=sum+i;
 }

            printf("%ld",sum);
 
    }
