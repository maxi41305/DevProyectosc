#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;

class escuela
{

private:
	fstream estudiante;
	char nombre[30];
	char apellido[30];
	int edad;
	int anio_ingreso;
public:
	escuela();
	escuela(char[],char[],int,int);
	
	//archivo
	int abrir(char[]);
	void cerrar(void);
	int salida(char[]);
	void mostrar(void);
	void cargar(void);
};
	
escuela::escuela(){
	strcpy(nombre," ");
	strcpy(apellido," ");
	edad=0;
	anio_ingreso=0;
}
escuela::escuela(char nom[],char apell[],int ed,int a_i){
	strcpy(nombre,nom);
	strcpy(apellido,apell);
	edad=ed;
	anio_ingreso=a_i;
}

//archivo 
int escuela::abrir(char arc[]){
	int res=0;
	estudiante.open(arc,ios::out);
	if (!estudiante)
		cout<<"Se produjo un error...";
	else
		res=1;
	return res;
}
void escuela::cargar(){
	estudiante<<endl;
	estudiante<<"Nombre:";
	estudiante<< nombre;
	estudiante<<"\n";
	estudiante<<"Apellido: ";
	estudiante<<apellido;
	estudiante<<endl;
	estudiante<<"Edad:";
	estudiante<<edad;
	estudiante<<endl;
	estudiante<<"anio ingreso";
	estudiante<<anio_ingreso;
}
void escuela::cerrar(){
	estudiante.close();
}
int escuela::salida(char arc[]){
	int res=0;
	estudiante.open(arc,ios::in);
	if(!estudiante)
		cout<<"Error";
	else
		res=1;
	return res;
}
void escuela::mostrar(){
	char datos;
	while(estudiante.get(datos))
		cout<<datos;
}

int main(){
char nombre[30],apellido[30];
int edad,anio_ingreso,m,n,l;
int contador=0;
cout<<"ingrese 1 si quiere salir, ingrese 2 si quiere cargar datos, ingrese 3 si quere visualizar";cin>>m;


if(m==2){
	cout<<"¿cuantos datos desea ingresar?  ";cin>>l;

while(l>contador){

	contador=contador+1;
	cout<<"ingrese nombre:  ";cin>>nombre;
	cout<<"ingrese apellido:  ";cin>>apellido;
	cout<<"ingrese edad:  ";cin>>edad;
	cout<<"ingrese año de ingreso:  ";cin>>anio_ingreso;
	
	cout<<"¿desea almacenar los datos ingresados? precione 1  ";cin>>n;
	
	if(n==1){
	 	escuela datos(nombre,apellido,edad,anio_ingreso);
	 		if(datos.abrir("escuela.txt"))
				datos.cargar();
				datos.cerrar();
			if(datos.salida("escuela.txt"))
				datos.mostrar();
	 }
}	
}
}
