// Check if a number is an Armstrong number
#include <stdio.h>

int isarmstrong(int n){
    int sum = 0;
    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
        }
        return (sum == n);

}

int main(){
    int n = 153;
    if (isarmstrong(n) == 1) {
        printf("%d is an Armstrong number\n", n);
    }
    else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}