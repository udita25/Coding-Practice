// Check whether a number is positive, negative, or zero.

#include<stdio.h>

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num < 0)
    printf("%d is negative.", num);
    else if(num > 0)
    printf("%d is positive.", num);
    else
    printf("%d is zero.", num);

    return 0;

}