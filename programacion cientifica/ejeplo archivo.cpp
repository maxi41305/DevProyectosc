#include<stream.h>
//dentro de la clase
private:
	fstream archivo;
public:
	int abrir(char[]);
	void cerrar(void);
	int salida(char[]);
	void mostrar(void);
	void cargar(void);
	
int clase::abrir(char arc[]){
	int res=0;
	archivo.open(arc,ios::out);
	if (!archivo)
		cout<<"Se produjo un error...";
	else
		res=1;
	return res;
}
void clase::cargar(){
	archivo<<variable;
	archivo<<"\";
}
void clase::cerrar(){
	archivo.close();
}
int clase::salida(char arc[]){
	int res=0;
	archivo.open(arc,ios::in);
	if(!archivo)
		cout<<"Error";
	else
		res=1;
	return res;
}
void clase::mostrar(){
	char datos;
	while(archivo.get(datos))
		cout<<datos;
}
