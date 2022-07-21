#include <iostream>
#include <cstdlib>
using namespace std;
char opcion;
int main()

{
	do
	{
		cout<<"0)Terminar ciclo \n";
		cout<<"1)Suma de dos valores \n2)Cuadrado de un numero \n3)Mensaje \n";
		cout<<"4)Limpiar pantalla\n";
		cout<<"Elige la opcion deseada: ";
		cin>>opcion;
		switch (opcion)
		{
			case '0':
				break;
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				system("cls");//Limpia pantalla//
				break;
			default:
				cout<<"Elegir una de las opciones seleccionadas \n";
		}
	}
	while(opcion!='0');
	system ("pause");
	return 0;
}
