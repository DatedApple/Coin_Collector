#include <iostream>
#include <cstdlib>
using namespace std;
int A;
float a, b, c, d, f;
int main()

{
	cout<<"Inserte manera de calificar: \n1)50%+20%+20%+10%\n2)40%+40%+20%\n3)25%+25%+25%+25%\n";
	cin>> A;
	switch (A)
	{
		case 1:
			cout<<"Calificacion examen: ";
			cin>>a;
			cout<<"Calificacion tareas: ";
			cin>>b;
			cout<<"Calificacion projecto: ";
			cin>>c;
			cout<<"Calificacion participacion: ";
			cin>>d;
			f=(a/2)+(b/5)+(c/5)+(d/10);
			cout<< "Calificacion final: "<< f<<"\n";
		break;
		case 2:
			cout<<"Calificacion examen: ";
			cin>>a;
			cout<<"Calificacion tareas: ";
			cin>>b;
			cout<<"Calificacion projecto: ";
			cin>>c;
			f=(2*(a/5))+(2*(b/5))+(c/5);
			cout<< "Calificacion final: "<< f<<"\n";
		break;
		case 3:
			cout<<"Calificacion examen: ";
			cin>>a;
			cout<<"Calificacion tareas: ";
			cin>>b;
			cout<<"Calificacion projecto: ";
			cin>>c;
			cout<<"Calificacion participacion: ";
			cin>>d;
			f=(a/4)+(b/4)+(c/4)+(d/4);
			cout<< "Calificacion final: "<< f<<"\n";
		break;
		default:
			cout<<"Error \n";
	}
	system ("pause");
	return 0;
}
