#include <iostream>

using namespace std;

int calculo_dias (int);

int calculo_dias(int){
	int diass=1,anus=0,dia=0,mes=0,anios=0,v[12]={31,28,31,30,31,30,31,31,30,31,30,31},n=0,contador=1,total_dias=0,a=0;
		if(anios%4==0){
			if (anios%100!=0){
					if (anios%400==0){
					}	else v[1]++;
			}else v[1]++;
	}else v[1]++;

	
	n=mes-1;
	//dia=dia-1;
		while(n>=contador){
			contador=contador+1;
			total_dias=v[a]+total_dias;
			a=a++;
		}
	total_dias=total_dias+dia;
}

int main()
{
	int dia=0,mes=0,anios=0;
	cout<<"ingresar dia ";cin>>dia;
	cout<<"ingresar mes ";cin>>mes;
	cout<<"ingresar año ";cin>>anios;
	int calculo_dias(int);
	 
}
