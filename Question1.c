//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of N :\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       printf("%d\n",i);
       sum=sum+i;
      
    }
    
     printf("sum=%d",sum);
     return 0;
    
    }