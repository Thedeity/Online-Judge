#include<iostream>
using namespace std ;

int main()
{
	int bottle ;
	while(cin >> bottle)
	{
		if(bottle==0)
		return 0 ;
		
		int drink = 0 ;
		
		while(1)
		{
			int change = bottle / 3 ;
			drink += change ;
			bottle %= 3 ;
			bottle += change ;
			
			if(bottle<=2)
			break ;
		}
		
		if(bottle==2)
		drink ++ ;
		
		cout << drink << endl ;
	}
}
