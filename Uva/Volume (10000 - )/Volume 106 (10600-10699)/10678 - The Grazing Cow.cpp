#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;

#define PI 2*acos(0) 

int main()
{
	int N ;
	cin >> N ;
	
	while(N--)
	{
		double D , L , a , b ;
		cin >> D >> L ;
		
		a = D/2 + (L-D)/2 ;
		b = sqrt(L*L-D*D) / 2 ;
		cout << fixed << setprecision(3) << a*b*PI << endl ;
	}
}
