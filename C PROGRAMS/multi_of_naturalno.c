#include <stdio.h>

int main()
{
    int n = 1;
    int multi = 1;
    while (n <= 5)
    {
        multi = multi * n;
        n++;
    }
    printf("%d", multi);
    return 0;
}