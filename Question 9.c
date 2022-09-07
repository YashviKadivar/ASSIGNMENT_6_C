/* Write a program to calculate LCM of two numbers. */

#include<stdio.h>

int main()
{
   int x,y,i;

   printf("\n Enter a two Number->");
   scanf("%d%d",&x,&y);

   for(i=1;i<=x*y;i++)
   {
       if(i%x==0 && i%y==0)
       {
           printf("%d",i);
           break;
       }
   }

   return 0;
}
