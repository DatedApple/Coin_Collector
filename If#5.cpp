#include <iostream>
#include <cstdlib>
using namespace std;
float A, B;
int main()

{
	cout<<"Inserta un numero: ";
	cin>> A;
	if(A<0)
	{
		B=A*-1;
	}
	else
	{
		B=A;
	}
	cout<<"Valor absoluto de "<< A << " es "<< B << "\n";
	system ("pause");
	return 0;
}

