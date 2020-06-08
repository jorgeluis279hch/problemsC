#include "iostream"
#include "cctype"
#include "string.h"
#define TZIZE 250
void changeLower(char * );

using namespace std;

int main() {
	// array de caracteres 
	char inp[TZIZE] = "";
	cout << "minusc a MAYUSC y viceversa: " << endl;
	cin.getline(inp, TZIZE);
	changeLower(inp);
	for (int i = 0 ; inp[i] != '\0'; i++ ){
		cout << inp[i];
	}
}

void changeLower(char * a){
	while (*a != '\0'){
		if (islower(*a)){
			*a = toupper(*a);
		} else {
			*a = tolower(*a);
		}
		*a ++;
	}
	
}