//check the value and its array position
#include<stdio.h>
int main(void)
{
 int n,a[100],i;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=1;i<=n;i++)
 {
 	if(i!=a[i])
 	{
 		printf("%d",i);
 		break;
 	}
 }
 return 0;

}
