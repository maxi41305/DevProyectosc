#include <iostream>
#include <cstring>

using namespace std;


int main(){
		
int  curso=0,peor_curso=0,mejor_curso=0,nota_incorrecta=0,contador=0;
float nota=0.0,mejor_nota=0.0,peor_nota=10.0;
char nombre[30],mejor_nombre[30],peor_nombre[30];
 	do{
 		cout<<"ingrese nombre:  ";cin>>nombre;
		cout<<"ingrese Nota:  ";cin>>nota;
 		cout<<"ingrese curso:  ";cin>>curso;
 		 	if(nota>10){
 		nota_incorrecta=1;
	 }else if(nota<0){
	 	 nota_incorrecta=1;
 	}
		if(nota_incorrecta==0){
			if(nota>mejor_nota){
				mejor_nota=nota;
				mejor_curso=curso;
				mejor_nombre=nombre;
				
			}else if(nota<peor_nota){
				peor_nota=nota;
				peor_curso=curso;
				peor_nombre=nombre;
			}
		 cout<<"si quiere seguir ingresando notas precione 1 si quiere terminar precione 0:  ";cin>>contador;
	}else if(nota_incorrecta==1){
	contador=0;
}
	 }while(contador==1);
	cout<<"Mejor Alumno:  "<<mejor_nota,mejor_nombre,mejor_curso;

	cout<<"Peor Alumno: "<<peor_nota,peor_nombre,peor_curso;
}
 
