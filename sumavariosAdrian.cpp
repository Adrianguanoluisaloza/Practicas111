// Programa: SumaVariosAdrian.cpp
// Autor: Adrian Guanoluisa
// Fecha 2023-09-15
// Descricion: Suma Varios Numeros
#include<iostream>
using namespace std;
int main()
	{
		int x, a, b,c;
		cout<<"Ingrese la cantidad de numeros que va a sumar";
		cin>>c;
		for(x=0;x<c;x++)
		{
			cout<<"Ingrese a: ";
			cin>>a;
			b=a+x;

		}
		cout<<"El resultado es: "<<b;
		return 0;
	}
