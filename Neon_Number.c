#include<stdio.h>
int main()
{
  int n,sq,rem,s=0;
  scanf("%d",&n);
  sq=n*n;
  while(sq!=0)
  {
    rem=sq%10;
    s+=rem;
    sq/=10;
  }
  if(s==n)
  printf("Neon Number");
  else
  printf("Not Neon Number");
  return 0;
}