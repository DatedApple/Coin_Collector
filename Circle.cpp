#include <iostream>
#include <cstdlib>
using namespace std;
float r, A, P;
const float PI=3.14159;
int main()

{
	cout<<" Radio: ";
	cin>> r;
	A=r*r*PI;
	P=r	*2*PI;
	cout<<"Area: "<< A <<"\nPerimetro: "<< P <<"\n";
	system ("pause");
	return 0;
}
