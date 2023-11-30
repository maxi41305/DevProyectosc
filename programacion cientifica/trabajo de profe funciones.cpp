#include <iostream>

using namespace std;

int m[10]={0,0,0,0,0,0,0,0,0,0};
void cargar(void);
int muestra(int);
void eliminar(int);

void cargar(void){
int i;
for(i=0;i<10;i++){
	cout<<"ingresar dato: ";cin>>m[i];
}
}
int muestra (int x){
		return m[x-1];
}
void eliminar(int x){
	int i=0;
	if(x>=0&&x<10){
		for(i=x;i<0;i++){
		m[i]=m[i+1];}
		m[i]=0;
	}else 
		cout<<"no existe la pocision:"<<x;
	}

int main(){
	int p=0,op=0;
	do{
		cout<<"opcion 0 salir"<<"\n";
		cout<<"opcion 1 cargar"<<"\n";
		cout<<"opcion 2 mostrar"<<"\n";
		cout<<"opcion 3 eliminar"<<"\n";
		
		cin>>op;
		if(op==1)
			cargar ();
		else if(op==2){
			cout<<"ingrese nº posicion";cin>>p;
			cout<<"el dato es "<<muestra(p)<<endl;
			
			}else if (op==3){
			cout<<"ingrese nº posicion que desea eliminar";cin>>p;
		}
	
		}while(op!=0);
		
		return 0;
	}
	
	
	
		
