#include<iostream>
using namespace std ;

int main()
{
	int n , k=0 ;
	
	while(cin >> n)
	{
		if(!n)
		return 0 ;
		
		int brick[50] , amount = 0 , move = 0 ;
		for(int i=0 ; i<n ; i++)
		{
			cin >> brick[i] ;
			amount += brick[i] ;
		}
		
		for(int i=0 ; i<n ; i++)
		{
			if(brick[i]<amount/n)
			move += amount/n - brick[i] ;
		}
		
		cout << "Set #" << ++k << endl << "The minimum number of moves is " << move << ".\n\n" ;
		
		n-- ;
	}
	return 0 ;
}
