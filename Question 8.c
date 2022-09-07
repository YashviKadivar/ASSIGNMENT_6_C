/* Write a program to check whether a given number is a prime number or not. */

#include<stdio.h>

int main()
{
    int i,no;

    printf("\n Enter a number->");
    scanf("%d",&no);

    for(i=2;i<no;i++)
    {
        if(no%i!=0)
        {
          printf("\n Not Prime");
          break;
        }
    }

    if(i==no)
    {
        printf("\n Prime");
    }

    return 0;
}
