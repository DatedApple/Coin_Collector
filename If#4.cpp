#include <iostream>
#include <cstdlib>
using namespace std;
float A, B, C;
int main()

{
	cout<<"Inserta un numero: ";
	cin>>A;
	cout<<"Inserta un numero: ";
	cin>>B;
	cout<<"Inserta un numero: ";
	cin>>C;
	if(A=!B or A!=C or B!=C)
	{
		if(A>B and A>C)
		{
			cout<< A <<" es mayor \n";
		}
		else if(B>A and B>C)
		{
			cout<< B <<" es mayor \n";
		}
		else if(C>A and C>B)
		{
			cout<< C <<" es mayor \n";
		}
	}
	else
	{
		cout<<"Inserte numeros distintos \n";
	}
	system ("pause");
	return 0;
}
