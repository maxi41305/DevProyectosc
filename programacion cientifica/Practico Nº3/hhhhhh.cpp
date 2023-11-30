#include<iostream>
#include<string.h>

using namespace std;

class cliente
{
private:
	char nombre[30];
	char direccion[30];
	int monto_adeudado;
	int porcentaje;
	int monto_total;
public:
	cliente();
	deuda(int,int);
	cliente(char[],char[],int,int,int);

int controlar_porcentaje(int);
int getdeuda();
void guardar_datos(char,char,int,int);	
};


cliente::cliente()
{
strcpy(nombre," ");
strcpy(direccion," ");
monto_adeudado=0;
porcentaje=0;
monto_total=0;
}

cliente::cliente(char nom[],char d[],int m_a,int p,int m_t)
{
strcpy(nombre,nom);
strcpy(direccion,d);
monto_adeudado=m_a;
porcentaje=p;
monto_total=m_t;
}

int controlar_porcentaje(int p){
	int valor=0;
	if(p<=60){
		if(p>0){
		cout<<"porcentaje correcto";
		valor=1;
		}
	}
return valor;	
}



int main(){
char nombre[30],direccion[30];
int porcentaje,monto_total,monto_adeudado,n,contador;
int cliente;
do{
cout<<"si quiere ingresar datos de algun cliente precione 1, si quieres ver datos de algun cliente precione 2:  ";cin>>n;
	if (n==1){
		cout<<"Ingrese Nombre y Apellido:  ";cin>>nombre;
		
		cout<<"ingrese direccion:  ";cin>>direccion;
		
		cout<<"ingrese porcentaje de Credito:  ";cin>>porcentaje;
		
		if(controlar_porcentaje(porcentaje)==1){                  //preguntando si el porcentaje ingresado es correcto
			cout<<"ingrese monto total:  ";cin>>monto_total;
			
			monto_adeudado=monto_total*porcentaje/100;  //calculo de monto adeudado

		
			cout<<"...cliente:  "<<nombre;

			cout<<"...direccion:  "<<direccion;

		cout<<"...monto adeudado:  "<<monto_adeudado;	
		
		}
	}
	
	cout<<"si quiere seguir cargando datos precione 1";cin>>contador;
}while(contador==1)	;
}

