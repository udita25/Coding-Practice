// Simple calculator using switch-case (add, subtract, multiply, divide).

#include <stdio.h>

int main(){
    int choice, num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Select your choice(1-4)...\n");
    printf("1. Add \n 2. Subtract \n 3. Muliply \n 4. Divide \n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1+num2;
        printf("Result: %d", result);
        break;
    
    case 2:
       result = num1-num2;
       printf("Result: %d", result);
       break;
    
    case 3:
    result = num1*num2;
    printf("Result: %d", result);
    break;

    case 4:
    if(num2 != 0){
    result = num1/num2;
    printf("Result: %d", result);
    }
    else
    printf("Error! Division by zero is not allowed.");
    break;
    
    default:
    printf("Invalid choice");
        break;
    }

    return 0;
}