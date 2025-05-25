// Create a recursive function to calculate Fibonacci series.
#include <stdio.h>

int fibonacci(int num){
    if(num == 0)
       return 0;
    
    else if(num == 1)
        return 1;
    
    else
        return (fibonacci(num-1) + fibonacci(num-2));

}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
}
