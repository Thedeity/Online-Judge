#include<iostream>
using namespace std ;

int main()
{
	int N ;
	while(cin >> N)
	{
		int drink = N ;
		int bottle = drink ;
		
		while(bottle/3!=0)
		{
			int temp = bottle/3 ;
			drink += temp ;
			bottle %= 3 ;
			bottle += temp ;	
		}
		
		if(bottle==2)
		drink++ ;
		
		cout << drink << endl ;
	}
}
