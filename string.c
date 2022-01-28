#include<stdio.h>

int main()
{
    char str[10]={'N','A','K','U','L','\0'};
    int i;

    for (i=0; str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;

}