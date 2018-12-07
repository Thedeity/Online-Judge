#include<iostream>
using namespace std ;

int main()
{
	double H , U , D , F ;	
	while(cin >> H >> U >> D >> F)
	{
		if(H==0)
		return 0 ;
		
		double snail = 0 , day = 1 ;
		while(1)
		{
			double tire ;
			
			if(F*(day-1)>=100)
			tire = 0 ;
			else
			tire = (100-(day-1)*F) / 100 ;
			
			snail += U * tire ;
			if(snail>H)
			break ;
			
			snail -= D ;

			if(snail<0)
			break ;
			
			day ++ ;
		}
		if(snail>=H)
		cout << "success on day " << day << endl ;
		else
		cout << "failure on day " << day << endl ;
	}
}
