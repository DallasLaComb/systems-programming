#include <stdio.h>
#include <stdlib.h>

int main(){
    int oddCounter= 0;
    int userInput;
    for (int i;i<10;i++){
        printf("Please enter %d Number:",i);
        scanf("%d",&userInput);
        if(userInput%2!=0){
            oddCounter++;
        }
    }

    printf("You entered %d odd numbers", oddCounter);
    return 0;
}