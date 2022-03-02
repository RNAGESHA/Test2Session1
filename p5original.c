#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("enter the between prime numbers\n");
  scanf("%d ",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
  a[0]=0;
  a[1]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
   
}