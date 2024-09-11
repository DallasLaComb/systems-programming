#include <stdio.h>

int main(void){
    double gpa;
    printf("Enter your gpa score: ");
    scanf("%lf", &gpa);
    if (gpa>3.75){
        printf("Your score is: A\n");
    }
    else if(gpa>3.5){
        printf("Your score is: A-\n");
    }
    else if(gpa>3.25){
    printf("Your score is: A\n");
    }
    else{
            printf("Your score is: F\n");

    }
    return 0;
}