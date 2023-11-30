#include <iostream>
#include <cstring>

using namespace std;


class fecha

{
private:
int dia;
int mes;
int anio;

public:
fecha(void);
fecha(int, int, int);

int getdia(void);
int getmes(void);
int getanio(void);
//void Controla fecha(void);
void muestrafecha(void);
};


fecha::fecha()
{
dia = 0;
mes = 0;
anio = 0;
}
fecha::fecha(int d, int m, int a)
{
dia = d;
mes = m;
anio = a;
}


int fecha::getdia()
{
return dia;
}


int fecha::getmes()
{
return mes;
}


int fecha::getanio()
{
return anio;
}


void fecha::muestrafecha()
{
cout<<"\n"<<dia<<"/"<<mes<<"/"<<anio;
}


void fecha::cambiarfecha(int d, int m, int a)
{
if(escorrecta(d,m,a))
{
dia = d;
mes = m;
anio = a;
}
else
{
cout<<"\n La fecha introducida es incorrecta. Datos no modificados.";
}
 
}
int escorrecta(int d, int m, int a)
{
int arraydiasmes[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int retorna=1;
if(a==0) 
retorna=0; 
if(d<=0||d>31)
retorna=0; 

if(m<=0||m>12)
	retorna=0; 

if(m==2 && d>29)
retorna=0; 
if(arraydiasmes[m-1]>d)
retorna=0; 
if(m==2 && d==29 && !esbisiesto(a))
retorna=0; 
returnretorna;
}

int esbisiesto(inta)
{
int retorna=1; 
if((a%4==0)||(a%400==0)&&(a%100!=0))
retorna=0; 
return retorna;
}





void main()
{
int dia,mes,anio;
do 
{
cout<<"\nintroduzca día de nacimiento: ";
cin>>dia;
cout<<"\nintroduzca día de nacimiento: ";
cin>>mes;
cout<<"\nintroduzca día de nacimiento: ";
cin>>anio;
}while(!escorrecta(dia,mes,anio));
fecha nacimiento(dia,mes,anio);
nacimiento.cambiarfecha(10,31,1984); 
cout<<"\nmostrando la fecha por pantalla con el método mostrarfecha(): ";
nacimiento.mostrarfecha(); 
cout<<"\nmostrando la fecha por pantalla con los métodos getdia(), getmes() y getanio():"<<nacimiento.getdia()<<"/"<<nacimiento.getmes()<<"/"<<nacimiento.getanio(); 
}



