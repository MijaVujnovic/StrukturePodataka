#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1. Napisati program koji prvo pročita koliko redaka ima datoteka, tj. koliko ima studenata
zapisanih u datoteci. Nakon toga potrebno je dinamički alocirati prostor za niz struktura
studenata (ime, prezime, bodovi) i učitati iz datoteke sve zapise. Na ekran ispisati ime,
prezime, apsolutni i relativni broj bodova.
Napomena: Svaki redak datoteke sadrži ime i prezime studenta, te broj bodova na kolokviju.
relatvan_br_bodova = br_bodova/max_br_bodova*100*/

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