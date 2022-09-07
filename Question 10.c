/* Write a program to reverse a given number. */

#include<stdio.h>

int main()
{
   int n,new_num=0;

   printf("\n Enter a Number->");
   scanf("%d",&n);

   while(n)
   {
       new_num=new_num*10+(n%10);
       n=n/10;
   }

   printf("\n %d",new_num);

   return 0;
}
