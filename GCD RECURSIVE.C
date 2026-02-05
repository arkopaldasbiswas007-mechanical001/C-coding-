#include<stdio.h>
int gcdvalue (int p,int q){
  if(q==0)
     return p;
  return gcdvalue (q,p%q);
}
int main() 
{
  int p,q;
  printf("Please Enter the Two Numbers:");
  scanf("%d%d",&p,&q);
  printf("GCD value will be=%d",gcdvalue(p,q));
     return 0;
}
