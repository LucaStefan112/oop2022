#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* inputFile = fopen("in.txt", "r");

    if (!inputFile) printf("Error! Could not open file\n"); 

    else{
        char character;
        int number = 0, sum = 0;

        while((character = getc(inputFile)) != EOF){
            if(character == '\n'){
                sum += number;
                number = 0;
            }
            else if('0' <= character && character <= '9')
                number = number * 10 + int(character) - 48;
        }

        sum += number;

        printf("The sum is: %d\n", sum);
    }

    system("pause");
    return 0;
}