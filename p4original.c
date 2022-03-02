#include<stdio.h>
int input()
{
  int n;
  printf("enter the  numbers\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  if(n==1)
    return 0;
  else if(n==2)
    return 1;
  else
    return (n-1)+(n-2);
  
}
void output(int n,int fibo)
{
  printf("\n");
  printf("%dth  prime number is a %d\n",n,fibo);
}
int main()
{
  int a,s;
  a=input();
  s=find_fibo(a);
  output(a,s);
  return 0;
}