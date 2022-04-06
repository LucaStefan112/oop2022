#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
int stringToNumber(char *str){
	int s = 0, i = 0;

	while ('0' <= str[i] && str[i] <= '9')	s = s * 10 + str[i++] - 48;

	return s;
}
int main() {

	FILE* file;

	file = fopen("in.txt", "r+");
	
	char str[20];
	int s = 0;
	int c;
	while (!feof(file)) {


		fgets(str, 5, file);

		s += stringToNumber(str);
	}

	printf("The sum is: %d", s);

	return 0;
}