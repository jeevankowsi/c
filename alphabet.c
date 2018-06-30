#include <stdio.h>
void main() 
{
  char c;
  printf("enter the charater\n");
  scanf("%c",&c);
  if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
  {
    printf("it is a alaphet%c",c);
  }
  else
  {
    printf("it is not  alaphet%c",c);
  }
}
