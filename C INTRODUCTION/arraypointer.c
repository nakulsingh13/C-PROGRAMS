#include<stdio.h>

int main(){
    int *p,i;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",(p+i));
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",*(p+i));
    }

    return 0;
}