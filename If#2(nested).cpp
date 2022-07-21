/*Lee valores DIFERENTES y determina el MAYOR
Good little Girl
Comentario de 2 o mas lineas*/
#include <iostream>
#include <cstdlib>
using namespace std;
float A, B;
int main()

{
	cout<<"Inserte un numero: ";
	cin>> A;
	cout<<"Inserte otro numero: ";
	cin>> B;
	if(A==B)
	{
		cout<<"\a\aInserte valores diferentes \n"; // \a es sonido; comentario 1 linea //
	}
	else
	{
		if(A>B)
		{
			cout<< A << " es mayor a "<< B <<"\n";
		}
		else
		{
			cout<< B << " es mayor a "<< A <<"\n";
		}
	}
	system ("pause");
	return 0;
}
