#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;

class cine
{
private:
int ganancia;
int numero_sala;
fstream ganancias;

public: 	
	cine();
	cine(int,int);


	int abrir(char[]);
	void cerrar(void);
	int salida(char[]);
	void mostrar(void);
	void cargar(void);

};

//constructores
cine::cine()
{
	ganancia=0;
	numero_sala=0;
}

cine::cine(int g,int n_s)
{
ganancia=g;
numero_sala=n_s;	
}

//archivoo
int cine::abrir(char arc[]){
	int res=0;
	ganancias.open(arc,ios::out);
	if (!ganancias)
		cout<<"Se produjo un error...";
	else
		res=1;
	return res;
}
void cine::cargar(){
	ganancias<<endl;
	ganancias<<"CINE ______ S.A.";
	ganancias<<endl;
	ganancias<<"ganancia: ";
	ganancias<< ganancia;
	ganancias<<endl;
	ganancias<<"numero de sala";
	ganancias<<numero_sala;
}
void cine::cerrar(){
	ganancias.close();
}
int cine::salida(char arc[]){
	int res=0;
	ganancias.open(arc,ios::in);
	if(!ganancias)
		cout<<"Error";
	else
		res=1;
	return res;
}
void cine::mostrar(){
	char datos;
	while(ganancias.get(datos))
		cout<<datos;
}






int main(){
int n,contador,lunes_dosd,viernes_dosd,lunes_tresd,viernes_tresd,entradas;	
int ganancia,numero_sala;
cout<<"cuantas salas ingresara";cin>>n;

while(n>contador){
	
cout<<"Sala N°1"<<numero_sala;
cout<<"cuentas entradas fueron vendidas";cin>>entradas;
cout<<"pelicula 2D de Lunes a Jueves";cin>>lunes_dosd;
cout<<"peliculas 2D de Viernes a Domingo";cin>>viernes_dosd;
cout<<"peliculas 3D de Lunes a Jueves";cin>>lunes_tresd;
cout<<"peliculas 3D de Viernes a Domingo";cin>>viernes_tresd;

contador=contador+1;

ganancia=lunes_dosd*200+viernes_dosd*250+lunes_tresd*220+viernes_tresd*300;

cine datos(ganancia,numero_sala);
	if(datos.abrir("cine.txt"))
				datos.cargar();
				datos.cerrar();
			if(datos.salida("cine.txt"))
				datos.mostrar();
}
}
