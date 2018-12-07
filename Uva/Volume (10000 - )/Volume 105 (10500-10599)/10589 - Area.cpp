#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
	double N , a ;
	while(cin >> N >> a)
	{
		if( N==0 && a==0 )
		return 0 ;
		
		double x,y ;
		int M = 0 ;
		
		for(int i=0 ; i<N ; i++)
		{
			cin >> x >> y ;
		
			if( ( x*x+y*y<=a*a ) && ( (a-x)*(a-x)+y*y<=a*a ) && ( (a-x)*(a-x)+(a-y)*(a-y)<=a*a ) && ( (x*x+(a-y)*(a-y)<=a*a)) )
			M++ ;
		}
		
		cout << fixed << setprecision(5) << (M/N)*a*a << endl ;
	}
}
