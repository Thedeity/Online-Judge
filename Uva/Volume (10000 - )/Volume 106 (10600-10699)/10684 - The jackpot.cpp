#include<iostream>
using namespace std ;

int main()
{
	int N ;
	while(cin >> N)
	{
		if(!N)
		return 0 ;
		
		int num[10000] ;
		for(int i=0 ; i<N ; i++)
		cin >> num[i] ;
		
		int jackpot = -1 ;
		for(int i=0 ; i<N ; i++)
		{
			int amount = 0 ;
			for(int j=i ; j<N ; j++)
			{
				amount += num[j] ;
				if(amount>jackpot)
				jackpot = amount ;
			}
		}
		
		if(jackpot>0)
		cout << "The maximum winning streak is " << jackpot << "." << endl ;
		else
		cout << "Losing streak." << endl ;
	}
}
