#include <stdio.h>

unsigned long fibonacci(unsigned int n) {
    return (n <=2) ? n : fibonacci(n-1) + fibonacci(n-2);
}


int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
