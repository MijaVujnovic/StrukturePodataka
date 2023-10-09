#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct {
	char ime[10];
	char prezime[10];
	double bodovi;
}Student;


int main()
{
	int brojRedova=0;
	char charBuffer[1024]="";
	//printf("%d", brojRedova);
	FILE* filePointer = NULL;
	filePointer = fopen("text.txt", "r");
	if (filePointer == NULL) {
		printf("Datoteka nije pronadena");
		return 1;
	}

	while (!feof(filePointer)) {
		if (fgets(charBuffer, 1024, filePointer)) {
			brojRedova++;
		}

	}
	printf("%d", brojRedova);
	fclose(filePointer);

	return 0;
}