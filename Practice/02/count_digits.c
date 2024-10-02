// Write a program that counts integer numbers with 1,2, and 3 digits.
// The integer numbers containing 1,2 and 3 digits (both positive and negative) are
// written in a file "numbers.txt" as shown below. Your program will make an array count
// of size 3. The value 3 has to be defined as a constant. The first element of array count
// will contain number of values with 3 digits. 
// Using a loop, your program will read the values from the file and count the three
// types of numbers i.e 1-digit, 2-digit, and 3-digit numbers. After reading and count,your program
// will display the results on the screen as shown below. The printing of the results has to be 
// with a loop.
#include <stdio.h>
#include <stdlib.h>
// 
int main(int argc, char *argv[]){

    FILE *inputFile = fopen(argv[1],"r");
    int num;
    int count[3]={0,0,0};
    while(fscanf(inputFile,"%d",&num)!=EOF){
        if(num>=100 || num<=-100){
            count[0]+=1;
        }
        else if(num>=10 || num<=-10){
            count[1]+=1;
        }
        else if(num>=0 || num<=-1){
            count[2]+=1;
        }
    }
    printf("Numbers with 1 digit: %d\nNumbers with 2 digits: %d\nNumbers with 3 digits: %d\n",count[2],count[1],count[0]);
    return 0;
}