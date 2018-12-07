#include<iostream>
using namespace std ;

int main()
{
	int N ;
	cin >> N ;
	while(N)
	{
		N-- ;
		int digit ;
		cin >> digit ;
		
		if(digit==1)
		{
			cout << "1" << endl ;
			continue ;
		}
		
		int Q[1000] = {0} , bit_num ;
		for(int i=9,j=0 ; i>=2 ; i--)
		{
			while(digit%i==0)
			{
				Q[j] = i ;
				digit /= i ;
				bit_num = j ;
				j++ ;
			}
		}
		
		if(digit>=10)
		{
			cout << "-1" << endl ;
			continue ;
		}
		else
		{
			for(int i=bit_num ; i>=0 ; i--)
			cout << Q[i] ;
		}
		cout << endl ;
	}
	return 0 ;
	
}
