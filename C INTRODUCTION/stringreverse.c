#include <stdio.h>
#include <string.h>

void reversestr(char *name)
{
    int i, len, temp;
    len = strlen(name);

    for (i = 0; i < len / 2; i++)
    {

        temp = name[i];
        name[i] = name[len - i - 1];
        name[len - i - 1] = temp;
    }
}

int main()
{
    char str[100];
    printf(" Enter name :");
    gets(str);

    printf("normal name :%s \n", str);

    reversestr(str);
    printf("reversed name : %s", str);
}