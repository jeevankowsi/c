#include <stdio.h>
void main() 
{
  int a,b,c;
  scanf("%d",&a,&b,&c);
  if(a<b)
  {
    printf("A largest",a);
  }
  else if(b<c)
  {
    printf("B is largest",b);
  }
  else
  {
	printf(" c is largest\n",c);
  }
}
