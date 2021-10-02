#include<stdio.h>
int main()
{
    int factorial=1,i,n;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("factorial of %d! = %d",n,factorial);
return 0;
}