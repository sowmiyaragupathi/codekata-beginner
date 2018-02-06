//given 2 numbers and check whether it is square number
#include<stdio.h>
#include<math.h>
int main()
{
  int num1,num2,product,count=0,i;
  scanf("%d%d",&m,&n);
  product=m*n;
  for(i=0;i<=product;i++)
  {  
   if(product==i*i)
   {
    count=1;
   	
   }
  }
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;

}
