#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Please enter the number : ");
    scanf("%d",&n);
    printf("Factorical of %d = %d",n,fact(n));

}
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n-1);
}
