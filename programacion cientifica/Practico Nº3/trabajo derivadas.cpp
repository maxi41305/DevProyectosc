#include <iostream>
#include <cstring>

using namespace std;

class empleados{
	protected: 
		char nombre[50], direccion[50]; 
		float sueldo;
	public: 
		empleados();
  		void ingresar();
   		void visualiza();
};
empleados::empleados(){
	sueldo=0.0;}

void empleados::ingresar(){
	cout<<"ingrese nombre empleado: ";gets(nombre);
   	cout<<"ingrese direccion: ";gets(direccion);
   	cout<<"ingrese sueldo base: "; cin>>sueldo;
 }
void empleados::visualiza(){
	cout<<nombre<<direccion<<sueldo;}

class familia: public empleados{
	private:
		int hijos; char casado, escolaridad;
   	public: 
		familia();
   		void ingresar();
   		void calcular();
   		void visualizar();
};

familia::familia(){
   hijos=0;}

void familia::ingresar(){
	char a='a';
	cout<<"casado?(s/n): ";cin>>casado;;
   	cout<<"tiene hijos?(s/n): "; cin>>a;
   	if(a=='s'){
   		cout<<"cantidad de hijos: ";cin>>hijos;
      	cout<<"escolaridad?(s/n): ";cin>>escolaridad;}
   		calcular();
   }

void familia::calcular(){
	if(casado=='s')
   	sueldo=sueldo+200;
	sueldo=sueldo+(250*hijos);
   		if(escolaridad=='s')
   			sueldo=sueldo+(sueldo*0.05);
}

void familia::visualizar(){
	cout<<nombre<<direccion<<sueldo<<hijos;}


int  main(){
	familia ecf;
	familia esf;
	char a='a';
   	cout<<"empleado está casado o tiene hijos?(s/n): ";cin>>a;
   	if(a=='s'){
   		getchar();
   		ecf.empleados::ingresar();
     		ecf.ingresar();
     		ecf.visualizar();}
   	else
   		if(a=='n'){
   			getchar();
   			esf.empleados::ingresar();
     			esf.visualiza();
		}
	getchar();
}




