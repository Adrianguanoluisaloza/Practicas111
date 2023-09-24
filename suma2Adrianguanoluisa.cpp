// Programa: Suma22.cpp
//  Autor: Adrian Guanoluisa
//  Fecha: 2023-09-14
//  Descricion: Suma de dos numeros

#include<iostream>
using namespace std;
float x,y,z;
int ingreso()
	{

		cout<<"Ingrese X: "; cin>>x;
		cout<<"Ingrese y: "; cin>>y;
		return 0;
	}
int salida()
{
cout<<"La suma de "<<x<<"+"<<y<<"="<<z<<endl;
return 0;
}
int main()
       {
	ingreso();
		z=x+y;
		salida();
		return (0);
	}
