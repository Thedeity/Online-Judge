#include<iostream>
#include<iomanip>
#include<cmath>
#define PI 2.0*acos(0.0)
using namespace std ;

int main()
{
	double a ;
	while(cin >> a)
	{
		double s = a*a ;
		double three = s*( 1 - PI/6 - sqrt(3)/4 ) ;
		double ufo = s*( PI/2 - 1 ) ;
		double one = ufo*2 - ( s-4*three ) ;
		double two = ( ufo - one )*2 ;
		
		cout << fixed << setprecision(3) << one << " " << two << " " << three*4 << endl ;
	}
	cout << endl ;
}
