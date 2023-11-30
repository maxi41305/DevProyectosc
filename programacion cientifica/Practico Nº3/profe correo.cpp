#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <stdio.h>

class persona
{

	private:
		int edad;
		char nombre[10];
		fstreamalu;
	public:
		persona();
		voidleerdato();
		void cargar();
		int abrir(char[]);
		void cerrar();
		int salida(char[]);
		void mostrar();
};

persona::persona()
{
	edad=0;
}
void persona::leerdato()
{
	cout<< "nombre: ";
	gets(nombre);
	cout<< "edad: ";
	cin>> edad;
}
int persona abrir(chararc[])
{
	int res=0;

	alu.open(arc, ios::out);
	if (!alu)
		cout<< "se produjo un error... ";
	else {
		res=1;
	}
	return res;
}
void persona::cargar()
{
	alu<< nombre ;
	alu<< "\ ";
	alu<< edad << "\n";
}
voidpersona::cerrar()
{
	alu.close();
}
intpersona::salida(chararc[])
{
int res=0;
alu.open(arc, ios::in);
if (!alu)
		cout<< "ERROR NO SE PUDO ACCEDER";
else
		res=1;
return res;
}

voidpersona::mostrar()
{
chardatos;
while(alu.get(datos))
   {
	cout<<datos;
   }
}

void main()
{
	clrscr();
	inti, x;
	chardatos, archivo[10];
	persona a;
	cout<< "Ingrese el nombre del archivo...";
	gets(archivo);
	if (a.abrir(archivo))
	{
		for(x=0;x<5;x++)
		{
			a.leerdato();
			a.cargar();
		}
	}
a.cerrar();
if(a.salida(archivo)){
	a.mostrar();
	a.cerrar();
 }}


