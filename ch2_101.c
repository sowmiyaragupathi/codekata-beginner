//if the sequence is then print the last character in string
#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100];
 int n,b,i;
 scanf("%s",a);
 scanf("%d",&n);
 b=strlen(a);
 for(i=0;i<b;i++)
 {
 	if(n==a[i])
 	{
 	n=n+1;
 }
 }
 printf("%c",a[b-1]);
 return 0;

}
