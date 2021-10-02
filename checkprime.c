#include<stdio.h>
int isprime(int n);
int main()
{
    int n,i,flag;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    //checking the number is prime or not
    if(isprime(i)==1)
    {
       // printf("Number is prime");
        //checking number n-1 is prime or not
        if(isprime(n-i)==1)
        {
        printf("%d = %d + %d \n",n,i,n-i);
        }
    }
    }
return 0;
}
int isprime(n)
{
    int isprime=1,i;
    for(i=2;i<=n/2;i++)
    {
            if(n%i==0)
            {
                isprime=0;
            }

    }
return isprime;
}
