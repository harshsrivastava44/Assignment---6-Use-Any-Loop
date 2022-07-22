//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the value of N :\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}