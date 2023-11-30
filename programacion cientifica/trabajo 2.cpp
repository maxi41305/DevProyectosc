#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int sueldo_fijo=0,antiguedad=0,hijos=0,sueldo_total=0,hh=0,horas_trabajadas=0,descuento=0;
	char empleado;
	cout<<"Ingrese M si es Mnesualizado, Ingrese J si es Jornalizado ";cin>>empleado;
	cout<<"ingrese el descuento ";cin>>descuento;
	if (empleado=='m'){
		cout<<"ingrese sueldo fijo ";cin>>sueldo_fijo;
		cout<<"ingrese antiguedad ";cin>>antiguedad;
		cout<<"ingrese hijos ";cin>>hijos;
		if (hijos<3){
			sueldo_total=hijos*1000;
			hh=hijos*950;
			sueldo_total=sueldo_total+hh;
			}else if(hijos>3){
			
				sueldo_total=hijos*1000;
				hh=hijos*950;
				sueldo_total=sueldo_total+hh;
				sueldo_total=sueldo_total+1000;
				antiguedad=(sueldo_fijo*10/100)*antiguedad;
				sueldo_total=sueldo_total+antiguedad;
				}
		}else if (empleado=='j'){
		cout<<"ingrese hijos ";cin>>hijos;
		cout<<"ingrese Horas Trabajadas ";cin>>horas_trabajadas;
		if (hijos<3){
			sueldo_total=hijos*1000;
			hh=hijos*950;
			sueldo_total=sueldo_total+hh;
			}else if(hijos>3){
			sueldo_total=hijos*1000;
			hh=hijos*950;
			sueldo_total=sueldo_total+hh;
			sueldo_total=sueldo_total+1000;}
	}
		hh=horas_trabajadas*200;
		sueldo_total=sueldo_total+hh;
		sueldo_total=sueldo_total-descuento;
		cout<<"sueldo neto del trabajador "<<sueldo_total;
	
			}
