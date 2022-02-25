#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* inputFile = fopen("in.txt", "r");

    if (!inputFile) printf("Error! Could not open file\n"); 

    else{
        char character;
        int number = 0, sum = 0;

        while((character = getc(inputFile)) != EOF){
            printf("%c", character);
        }
    }

    system("pause");
    return 0;
}