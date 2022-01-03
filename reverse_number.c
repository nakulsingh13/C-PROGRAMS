#include <stdio.h>

int main()
{
    int num;
    int rem = 0, rev = 0;
    printf("Enter number\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;       // last digit of num
        rev = rev * 10 + rem; // Generate a number from rem as last digit
        num = num / 10;
    }
    printf("%d", rev);

    return 0;
}