// Write a function to check whether a number is prime.
#include<stdio.h>

int prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(prime(n))
    printf("%d is a prime number.", n);
    else
    printf("%d is not a prime number.", n);
    return 0;
}
int prime(int n)
{
     for (int i = 2; i < n; i++) {
      
        // If N is divisible by i, it is not a prime number
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
