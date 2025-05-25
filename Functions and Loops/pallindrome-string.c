// Check if a string is a palindrome
#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int left = 0, right = len - 1;
    while (left<right){
        if (str[left] != str[right]) {
            printf("%s is not a palindrome.\n", str);
            return 0;
            left++;
            right--;
    }
    return 0;
}
}