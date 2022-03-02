#include<stdio.h>
#include<math.h>
int input_number()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int f=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        f++;
    }
  //printf("%d\n",f);
  return f;
}
void output(int n, int is_prime)
{
  if (is_prime==2)
    printf("%d is a prime number\n",n);
  else
  printf("%d is  not a prime number\n",n);   
}
int main()
{
  int a,result;
  a=input_number();
  result=is_prime(a);
  output(a,result);
  return 0;
}