#include <iostream>
#include <cstdlib>
using namespace std;
float A, B, S, R, M;
int main()

{
	cout<< "Introduzca un numero: ";
	cin>> A;
	cout<< "Introduzca un numero: ";
	cin>> B;
	S=A+B;
	R=A-B;
	M=A*B;
	cout<< "Suma: "<< S << "\nResta: " << R << "\nMultiplicacion: " << M <<"\n";
	system ("pause");
	return 0;
}
