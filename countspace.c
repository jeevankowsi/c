#include<stdio.h
void main()
       {
              char str[50];
              int i,count=0;
              printf("\nEnter any string : ");
              gets(str);
              for(i=0;str[i];i++)
               if(str[i] == ' ')
                      count++;
              rintf("\nTotal blank spaces : %d",count);

             
    }
