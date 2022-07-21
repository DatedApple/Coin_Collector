#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int Tc,h,m;
	int i;
	cin>>Tc;
	for(i=0;i<Tc;i++){
		cin>>h>>m;
		cout<<1440-(h*60+m)<<endl;
	}
	system ("pause");
	return 0;
}
