/* Write a program to calculate sum of first N natural numbers. */

#include<stdio.h>

int main()
{
    int i,n,sum=0;

        printf("\n Enter a Number->");
        scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                sum=sum+i;
                printf("\n %d",sum);
            }

    return 0;
}
