#include <iostream>
#include <cstring>
#include <stdio.h>



int main()
{
	char  primera[15], segunda[15], palabra[15];
	
	
//	cout << "INGRESE UNA PALABRA ";gets(primera);
	strcpy(palabra, primera);
	
	cout <<"\n"<< primera;
	cout <<"\n"<< palabra;
	cout << "INGRESE LA SEGUNDA PALABRA ";gets(segunda);
	strcat(palabra, segunda);
	
	cout <<"\n"<< segunda;
	cout << "Muestre la cantidad de caracteres de la Variable Palabra:  " << strlen(palabra) <<"\n";
	cout << "Muestre la cantidad de caracteres de segunda:  " << strlen(segunda) <<"\n";
	getchar();
}

