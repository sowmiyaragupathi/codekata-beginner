//product of the digits
#include<stdio.h>
int main(void)
{
 int a,temp,ans=1;
 scanf("%d",&a);
temp=a;
while(a!=0)
{
	temp=a%10;
	ans=ans*temp;
	a=a/10;
}
 printf("%d",ans);
 return 0;

}
