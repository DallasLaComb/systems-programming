#include <stdio.h>

int main(){
    double d_first_input=0;
    double d_second_input=0;
    double d_result=0;
    printf("Please enter first number: \n");
    scanf("%lf", &d_first_input);
    printf("Please enter second number: \n");
    scanf("%lf", &d_second_input);
    d_result = d_first_input * d_second_input;
    printf("The result of %lf and %lf is %lf \n",d_first_input,d_second_input,d_result);

    return 0;
}