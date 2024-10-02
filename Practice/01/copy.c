// Write a program that copies content of input file (input.txt) to output file (output.txt)
// Your program must take the input file name and output file name as follows assuming the name 
// of your source file is as copy.c. Here is the sample run on terminal:
// $./copy input.txt outpout.txt
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *inputFile = fopen(argv[1], "r");
    FILE *outputFile = fopen(argv[2], "w");
    char ch;

    while((ch = fgetc(inputFile)) != EOF){
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("File Copy Completed.\n");
    return 0;
}