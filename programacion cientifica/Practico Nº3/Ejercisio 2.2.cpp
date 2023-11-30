#include <iostream>
#include <cstring>


using namespace std;

class cliente{
private:
	
	int porcentaje_credito;
	int monto_total;

public:
	cliente(void);
	cliente(int,int);
	
int getporcentaje_credito(void);
int getmonto_total(void);

		
	int calcular_monto(int,int);
	int calcular_porcentaje(int);

};

//Constructores

cliente::cliente()
{
porcentaje_credito=0;
monto_total=0;
}

cliente::cliente(int p_c,int m_t)
{
porcentaje_credito=p_c;
monto_total=m_t;
}

//get para retornar

int cliente::getporcentaje_credito()
{
	return porcentaje_credito;
}	

int cliente::getmonto_total()
{
	return monto_total;
}




//Funciones 

int calcular_monto(int porcentaje_credito,int monto_total)
{
int m_a;	
m_a=monto_total*porcentaje_credito/100;

return m_a;
}
//monto total por porcentaje = monto adeudado

int calcular_porcentaje(int p_c)
{
int	valor=0;
	
	if(p_c<=60)
	{
	cout<<"porcentaje correcto";
	valor=1;
	
	}else cout<<"porcentaje incorrecto";
	return valor;
}




int main(){
int n,porcentaje_credito,monto_total,contador,cliente;
char nombre[30],direccion[30];	
int hh=0;
do{
cout<<"quiere ingresar datos precione 1";cin>>n;	
if(n==1){
	
cout<<"ingresar Nombre y Apellido:  ";cin>>nombre;
cout<<"ingresar Direccion: ";cin>>direccion;
cout<<"ingresar porcentaje de credito:  ";cin>>porcentaje_credito;
if(calcular_porcentaje(porcentaje_credito)==1){

cout<<"ingresar monto total:  ";cin>>monto_total;

	cout<<"nombre y apellido: "<<nombre;
	cout<<"direccion: "<<direccion;
	cliente deuda()
//	cout<<"monto adeudado: "<<calcular_monto(porcenjate_credito,monto_total);
}
}

cout<<"Si quiere Salir Precione 0, si quiere seguir precone 1";cin>>hh;
}while(hh==1);
}
