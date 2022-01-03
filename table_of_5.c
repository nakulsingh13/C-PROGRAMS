#include <stdio.h>

int main()
{
    int x = 1;
    int y = 5;
    while (x <= 10)
    {
        printf("%d X %d = %d\n", y, x, y * x);
        x++;
    }
    return 0;
}