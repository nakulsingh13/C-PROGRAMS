#include <stdio.h>

int main()
{
    int n;
    printf("Enter decimal value\n");
    scanf("%d", &n);
    int rem;
    int a[10];
    int i = 0;
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    }

    printf("Binary value :");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    return 0;
}