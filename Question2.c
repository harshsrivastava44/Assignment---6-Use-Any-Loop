//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of N :\n");
    scanf("%d",&n);
    for ( i = 2; i <=n; i+=2)
    {
       printf("%d\n",i);
       sum=sum+i;
      
    }
    
     printf("sum=%d",sum);
     return 0;
    
    }