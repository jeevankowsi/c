#include <stdio.h>
void main()
{
    char    str[100];
    int countDigits,countSpecialChar;
    int counter;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(str);
     for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
       else
            countSpecialChar++;
    }
     printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
  }
