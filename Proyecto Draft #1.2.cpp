/*Diego Pena 2doB
# de lista: 16
03/25/2022
Programa secuencial: 4)Una empresa acaba de otorgar un porcentaje de aumento a su personal, realizar un programa que calcule y muestre el sueldo neto(SN)
considerando la cantidad de horas(CH) y el pago por hora(PH) con un porcentaje(porc) variable de aumento(aum).
Las variables requeridas para la solución de este problema se muestran en la tabla
Programa de decision: 2)Una empresa de ropa para caballero tiene una promoción: a todos los trajes que tienen un precio superior a $2500.00 se les aplicará un
descuento de 15 %, a todos los demás se les aplicará sólo 8 %. Realice un programa para determinar el precio final que debe pagar una persona
por comprar un traje y de cuánto es el descuento que obtendrá
Las variables requeridas para la solución de este problema se muestran en la tabla
Programa ciclico: 1)Realizar un programa para obtener la edad promedio de un grupo de N alumnos.
Las variables requeridas para la solución de este problema se muestran en la tabla */
#include <iostream>
#include <cstdlib>
using namespace std;
char opcion;
int main()

{
	do
	{
		system("color 07");
		cout<<"0)Terminar ciclo \n";
		cout<<"1)Calcular sueldo con aumento \n2)Calcular descuento y precio final de un traje \n3)Calcular la edad promedio de un grupo de alumnos \n";
		cout<<"Elige la opcion deseada: ";
		cin>>opcion;
		system("cls");
		switch (opcion)
		{
			case '0':
				break;//Se sale del ciclo//
			case '1':
				system ("color F1");
				float SN, CH, PH, porc, aum;
				cout<<"Introducir horas trabajadas: ";
				cin>> CH;
				cout<<"Introducir sueldo por hora actual: ";
				cin>>PH;
				cout<<"Introducir porcentaje de aumento: ";
				cin>>porc;
				aum=(PH*CH)*(porc/100);
				SN=(PH*CH)+aum;
				cout<<"El sueldo neto con aumento es: "<<SN<<endl<<endl;
				break;
			case '2':
				system ("color 3E");
				float CT, DE, PF;
				cout<<"Inserte costo del traje: ";
				cin>>CT;
				if(CT>2500)
				{
					DE=CT*0.15;
				}
				else
				{
					DE=CT*0.08;
				}
				PF=CT-DE;
				cout<<"El precio final es de $"<<PF<<" con un descuento de $"<<DE<<"\n\n";
				break;
			case '3':
				system ("color 2F");
				float C, ED, SU, NU, PR;
				cout<<"Inserte el numero de alumnos: ";
				cin>>NU;
				SU=0;
				for(C=0;C<NU;C++)
				{
					cout<<"Inserte la edad del alumno #"<<C+1<<": ";
					cin>>ED;
					SU=SU+ED;
				}
				PR=SU/NU;
				cout<<"La edad promedio de los alumnos es de: "<<PR<<" años\n\n";
				break;
			default:
				cout<<"Elegir una de las opciones seleccionadas \n";
		}
	}
	while(opcion!='0');
	system ("pause");
	return 0;
}
