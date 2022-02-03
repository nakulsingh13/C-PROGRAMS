#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d",&num);
    //Runs in linear time
    //for (int i = 0; i <= num; i++)
    //{
    //    sum +=i;
    //}

    
    //Runs in Constant time
    sum = (num*num + num)/2;

    printf("Sum of first %d natural numbers is: %d\n",num,sum);
    

    return 0;
}