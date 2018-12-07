#include<iostream>
using namespace std ;

int main()
{
	int T , k = 1 ;
	cin >> T ;
	while(T)
	{
		char web[10][100] ;
		int popular[10] , temp = 0 ;
		
		for(int i=0 ; i<10 ; i++)
		{
			cin >> web[i] >> popular[i] ;
			
			if(popular[i]>temp)
			temp = popular[i] ;
		}
		
		cout << "Case #" << k << ":" << endl ;
		
 		for(int i=0 ; i<10 ; i++)
 		{
 			if(popular[i]==temp)
 			cout << web[i] << endl ;
		}
		k++,T-- ;
	}
	return 0 ;
}
