// Check if a number is even or odd using if-else.

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
    
    return 0;

}