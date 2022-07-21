#include <iostream>
#include <cstdlib>
using namespace std;
int A;
int main()

{
	cout<<"Inserte calificacion: ";
	cin>> A;
	switch (A)
	{
		case 10:
			cout<<"Excelente \n";
			break;
		case 9:
			cout<<"Buen Trabajo \n";
			break;
		case 8:
			cout<<"Buen Trabajo \n";
			break;
		case 7:
			cout<<"Aceptable \n";
			break;
		case 6:
			cout<<"Aceptable \n";
			break;
		default:
			cout<<"Reprobado \n";
	}
	system ("pause");
	return 0;
}
