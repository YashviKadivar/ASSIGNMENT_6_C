/* Write a program to calculate sum of first N odd natural numbers. */

#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
           sum=sum+i;
    }

    printf("\n sum of an odd Number = %d",sum);

    return 0;
}


