#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the two numbers\n");
  scanf("%d%d",&a,&b);
  int sum=a+b;
  int sub=a-b;
  int mult=a*b;
  int div=a/b;
  printf("%d + %d is %d\n",a,b,sum);
  printf("%d - %d is %d\n",a,b,sub);
  printf("%d * %d is %d\n",a,b,mult);
  printf("%d / %d is %d\n",a,b,div);
  return 0;
}