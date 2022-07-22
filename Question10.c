//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int i,n,rem,rev=0;
    printf("Enter a number : \n");
    scanf("%d",&n);
    
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;

    }
    printf("The reverse of a number =%d",rev);
    return 0;

}