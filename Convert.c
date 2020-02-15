/*****************************************
retora una letra dependiendo si es mayusc 0 minusc 
******************************************/
#include <stdio.h>

int esLetra(char c[]) {
	int cont, x, tamano;
	for (x = 0; c[x] != '\0'; x++) {
		if (c[x] >= '0' && c[x] <= '9') {
			cont ++; 
		} else{
			cont = 0;
		}
	}
	// tamano = sizeof(c)/sizeof(c[0]);
	// printf("%i", cont);
	// printf("%i", tamano);
	return cont > 0 ? 0 : 1;
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
		// char letra;
	char palabra[20];
	int i;
	// printf("Letra: "); scanf("%s", &letra);
	printf("Palabra:"); gets(palabra);
	if (esLetra(palabra)) {
		// es Mayuscula el caracter ? si es mayusc se convertira a mayus sino se convertira a minusc
		for (i = 0; palabra[i] != '\0' ; i++) {
			esMayuscOMinus(palabra[i]) == 1 ? printf("%c", aMaysOMinus(palabra[i], 0)) : printf("%c", aMaysOMinus(palabra[i], 1));
	}
	else {
		printf("no es una letra");
	}
	return 0;
}
