#include<iostream>
using namespace std ;

int main()
{
	int N,k=1 ;
	while(cin >> N)
	{
		int num[18] ;
		for(int i=0 ; i<N ; i++)
		cin >> num[i] ;
		
		long long int big = -20000000 ;
		for(int i=0 ; i<N ; i++)
		{
			long long int temp = 1 ;
			for(int j=i ; j<N ; j++)
			{
				temp *= num[j] ;
				if(temp > big)
				big = temp ;
			}
		}
		
		if(big<0)
		big = 0 ;
		
		cout << "Case #" << k << ": The maximum product is " << big << ".\n\n" ;
		k++ ;
	}
}
