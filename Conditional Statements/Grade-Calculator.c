// Grade calculator: Take marks (0–100) and print grade (A/B/C/D/Fail) using if-else.

#include<stdio.h>

int main(){

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 91)
    {
        printf("Congratulations!! You have scored an A grade.");
    }

    else if(marks <= 90 && marks >= 81 ){
        printf("You have scored a B grade.");
    }
    else if(marks <= 80 && marks >= 71){
        printf("You have scored a C grade.");
    }
    else if(marks <= 70 && marks >= 61){
        printf("You have scored a D grade.");
    }
    else{
        printf("You have failed");
    }

}