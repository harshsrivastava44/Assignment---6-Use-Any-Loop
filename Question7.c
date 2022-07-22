//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N :\n");
    scanf("%d",&n);
   for ( i = 0; i<=n ; i++)
   {
    n=n/10;
   }
   printf(" Number of digits is %d",i);
   
    
    return 0;
}