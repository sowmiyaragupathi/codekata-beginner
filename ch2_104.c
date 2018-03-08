//find power the given number
#include <stdio.h>
#include<math.h>
int main(void)
{
 int base,ans=1,exp,i;
 scanf("%d %d", &base,&exp);
 ans=pow(base,exp);
 printf("%d",ans);
 return 0;
}
