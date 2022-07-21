#include <iostream>
#include <cstdlib>
using namespace std;
int i, n, x;
int main()

{
	system ("color 14");
	i=0;
	cout<<"Limit: ";
	cin>>n;
	cout<<"Increase: ";
	cin>>x;
	while (i<=n)
	{
		system  ("color F3");
		cout<<i<<"\n";
		i=i+x;
	}
	system ("pause");
	return 0;
}
