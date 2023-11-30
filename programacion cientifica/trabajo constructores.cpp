#include <iostream>
#include <cstring>

using namespace std;


class fecha

{
//private:
public:
int dia;
int mes;
int anio;
public:
fecha (void);
fecha (int, int, int);

int getdia(void);
int getmes(void);
int getanio(void);

void muestrafecha(void);
void setdia(int);
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

void fecha::setdia(int d){
	dia=d;
}


int main(){
int diam,mesm,aniom;
cout<<"ingrese dia de nacimiento:  ";cin>>diam;
cout<<"ingrese mes de nacimiento:  ";cin>>mesm;
cout<<"ingrese año de nacimiento:  ";cin>>aniom;
fecha nacimiento(diam,mesm,aniom);
nacimiento.muestrafecha();
cout<<"....................";
nacimiento.setdia(20);
nacimiento.muestrafecha();
}

