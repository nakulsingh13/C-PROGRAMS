#include<stdio.h>

void fun();

void main(){
    fun();
    fun();
    fun();
}

void fun(){
    static int x=1;
    int y=1;
    x++;
    y++;
    printf("Y = %d\n",y);
    printf("X  = %d\n",x);
}