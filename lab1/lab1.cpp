#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <cstring>

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

	printf("The sum is: %d\n\n", s);

////////////////////////////////////

	char mat[255][255], sen[255] = "Ana are foarte multe mere";
	int n = 0;

	char* p = strtok(sen, " ");
	
	while(p){
		strcpy(mat[n++], p);
		p = strtok(NULL, " ");
	}

	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(strlen(mat[i]) < strlen(mat[j])){
				char aux[255];
				strcpy(aux, mat[i]);
				strcpy(mat[i], mat[j]);
				strcpy(mat[j], aux);
			}

	for(int i = 0; i < n; i++)
		printf("%s\n", mat[i]);

	return 0;
}