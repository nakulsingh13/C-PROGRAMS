#include <stdio.h>

int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return (n*factorial(n-1));
}

int main()
{
    int num;
    int fact;
    printf("Enter number:");
    scanf("%d",&num);

    fact=factorial(num);
    printf("Factorial: %d\n",fact);
    return 0;
}