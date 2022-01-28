#include <stdio.h>


typedef struct complex
{
    float r, i;
} complex;

void add(complex n1, complex n2,complex *);

int main()
{
    complex n1, n2, result;

    printf("enter first");
    scanf("%f%f", &n1.r, &n1.i);

    printf("enter second");
    scanf("%f%f", &n2.r, &n2.i);

    add(n1, n2,&result);

    printf("Sum = %.1f + %.1fi", result.r, result.i);
    return 0;
}

void add(complex n1, complex n2,complex *temp)
{
    temp->r = n1.r + n2.r;
    temp->i = n1.i + n2.i;
}