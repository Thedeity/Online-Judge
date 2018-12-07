#include<iostream>
using namespace std ;

int main()
{
	int T ;
	cin >> T ;
	
	while(T--)
	{
		double x,y,z ;
		cin >> x >> y >> z ;
		
		cout << int( (2*x-y) / (x+y) * z ) << endl ;
	}
	return 0 ;
}
