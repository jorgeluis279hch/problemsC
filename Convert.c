/*****************************************
retora una letra dependiendo si es mayusc 0 minusc 
******************************************/
#include <stdio.h>

int esLetra(char c) {
	return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
}

int esMayuscOMinus(char c) {

	return c >= 'A' && c <= 'Z' ? 1 : 0;
}

int aMaysOMinus(char c, int x) {
	// a Mayuscu o minusc
	return x == 1 ? c - 'a' + 'A' : c - 'A' + 'a';
}

int main()
{	
	char letra;
	printf("Letra: "); scanf("%s", &letra);
	if (esLetra(letra)) {
		// es Mayuscula el caracter ?
		esMayuscOMinus(letra) == 1 ? printf("%c \n", aMaysOMinus(letra, 0)) : printf("%c \n", aMaysOMinus(letra, 1));
	} else {
		printf("no es una letra");
	}
	return 0;
}
