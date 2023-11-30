#include <iostream>
#include <cstring>

using namespace std;

class hora24
{
private:

int hora;
int minuto;
int segundo;

public:
hora24(void);
hora24(int,int,int);

int gethora(void);
int getminuto(void);
int getsegundo(void);

int controlar_hora(int,int,int);
void muestra_hora(void);
};

hora24::hora24(){
hora=0;
minuto=0;
segundo=0;
}

hora24::hora24(int h,int m,int s){
hora=h;
minuto=m;
segundo=s;
}

int hora24::gethora()
{
	return hora;
}
int hora24::getminuto()
{
	return minuto;
}
int hora24::getsegundo()
{
	return segundo;
}

void hora24::muestra_hora(){
int hora_valor=0,minuto_valor=0,segundo_valor=0;
//cout<<"............";

	if(hora<10){
	hora_valor=1;
	}
	if(minuto<10){
	minuto_valor=1;
	}
	if(segundo<10){
	segundo_valor=1;
	}

if(hora_valor==1&&minuto_valor==1&&segundo_valor==1)
{
cout<<"/0"<<hora<<"/0"<<minuto<<"/0"<<segundo;

}else if(hora_valor==1&&minuto_valor==1)
{
cout<<"/0"<<hora<<"/0"<<minuto<<"/"<<segundo;	

}else if(hora_valor==1&&segundo_valor==1){

cout<<"/0"<<hora<<"/"<<minuto<<"/0"<<segundo;

}else if(minuto_valor==1&&segundo_valor==1){
	cout<<"/"<<hora<<"/0"<<minuto<<"/0"<<segundo;

}else if(hora_valor==1){
	cout<<"/0"<<hora<<"/"<<minuto<<"/"<<segundo;
}else if(minuto_valor==1){
	cout<<"/"<<hora<<"/0"<<minuto<<"/"<<segundo;
}else if(segundo_valor==1){
	cout<<"/"<<hora<<"/"<<minuto<<"/0"<<segundo;
}

}


int controlar_hora(int h,int m,int s){
int valor=1;

if(h<0||h>59){
	cout<<"Hora Ingresada Incorrecta";
valor=0;
}

if(m<0||m>59){
	cout<<"Minuto ingresado Incorrecto";
valor=0;
}

if(s<0||s>59){
	cout<<"Segundo Ingresado Incorrecto";
valor=0;
}

return valor;
}


int main(){
int horas=0,minutos=0,segundos=0;

cout<<"Ingrese Hora:  ";cin>>horas;
cout<<"Ingrese Minuto:  ";cin>>minutos;
cout<<"ingrese segundo:  ";cin>>segundos;

if(controlar_hora(horas,minutos,segundos)){

hora24 horarios(horas,minutos,segundos);
horarios.muestra_hora();
}
return 0;
}





