#include <iostream>
#include <cstdlib>
using namespace std;
float A, B, C;
int main()

{
	cout<<"Elige un numero: ";
	cin>>A;
	cout<<"Elige un divisor: ";
	cin>>B;
	if(B==0)
		{
		cout<<"Hubo un error en el programa \n";
		}
	else
		{
		C=A/B;
		cout<<"Resultado: "<< C <<"\n";
		}
	system ("pause");
	return 0;
}
