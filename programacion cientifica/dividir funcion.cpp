#include <iostream>

using namespace std;

float dividir(int,float);

float dividir (int a,float b)
{
	float s=0.0;
	s=a/b;
	return s;
}

int main(){
	int n1=0,n2=0;
    float n3=0.0;
	cout<<"ingrese el Primer Numero";cin>>n1;

	cout<<"ingrese el tercer numero";cin>>n3;
	cout<<"resultado:"<<dividir(n1,n3);
	return 0;
}
