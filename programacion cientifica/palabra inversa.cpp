#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
	char palabra[30],palabra_invertida[30];
	cout<<"ingrese palabra:  ";cin>>palabra;
	strcpy(palabra_invertida,palabra);

	strrev(palabra_invertida);
	
	if (strcmp(palabra,palabra_invertida)==0)
	{
		cout<<"la palabra es Palíndromo ";
	}else 
	cout<<"la palabra es distinta";

}
