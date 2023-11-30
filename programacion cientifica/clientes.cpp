#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;

class clientes
{
	private:
		char nombre[30];
		char apellido[30];
		char direccion[30];
		float credito;
		int mt;
		int ma;
		fstream archivo;
	public:
		clientes();
		deuda(int,int);
		clientes (int,int,int,char[],char[],char[]);
	//	float getpo();
	//	por(float);
	//	void setn(char[]);
	//	void seta(char[]);
	//	void setd(char[]);
	//	void setc(float);
	//	void setmt(int);
	//	void setma(int);
		int getdeuda();
		int abrir(char[]);
		void cerrar(void);
		int salida(char[]);
		void mostrar(void);
		void cargar(void);

};

clientes::clientes(int ma,int mt,int credito,char n[],char a[],char d[]){
	mt=0;
	credito=0;
	ma=0;
	strcpy(nombre,n);
	strcpy(apellido,a);
	strcpy(direccion,d);
}
clientes::deuda(int mt,int credito){
	ma=mt*credito/100;
	return ma;
}
int clientes::getdeuda(){
	return ma;
}


int clientes::abrir(char arc[]){
	int res=0;
	archivo.open(arc,ios::out);
	if (!archivo)
		cout<<"Se produjo un error...";
	else
		res=1;
	return res;
}
void clientes::cargar(){
	archivo<<endl;
	archivo<<"Nombre:";
	archivo<< nombre;
	archivo<<"\n";
	archivo<<"Apellido: ";
	archivo<<apellido;
	archivo<<endl;
	archivo<<"Monto adeudado:";
	archivo<<ma;
}
void clientes::cerrar(){
	archivo.close();
}
int clientes::salida(char arc[]){
	int res=0;
	archivo.open(arc,ios::in);
	if(!archivo)
		cout<<"Error";
	else
		res=1;
	return res;
}
void clientes::mostrar(){
	char datos;
	while(archivo.get(datos))
		cout<<datos;
}

int main(){
	char n[30],a[30],d[30];
	int mt=0,ma=0;
	float credito=0;
	
	cout<<"Ingrese un nombre: ";
	cin>>n;
	cout<<"Ingrese un apellido: ";
	cin>>a;
	cout<<"Ingrese una direccion: ";
	cin>>d;
	cout<<"Ingrese el monto total: ";
	cin>>mt;
	do{
		cout<<"Ingrese un porcentaje: ";
		cin>>credito;
		if(credito>60){
			cout<<"El porcentaje ingresado es mayor del 60%"<<endl;
			cout<<"Ingrese un porcentaje: ";
			cin>>credito;
		}
	}while(credito>60);
	clientes deuda(ma,mt,credito,n,a,d);
	deuda.deuda(mt,credito);
	cout<<"El monto adeudado es:"<<deuda.getdeuda();
	if(deuda.abrir("clientes.txt"))
		deuda.cargar();
		deuda.cerrar();
	if(deuda.salida("clientes.txt"))
		deuda.mostrar();
}
