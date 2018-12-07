#include<iostream>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n && n!=0)
	{
		if(n==1)
		{
			cout << "Discarded cards:"
				 << "\nRemaining card: " << 1 << endl ;
				 continue ;
		}
		int deck[100]= {0} ;
		for(int i=0 ; i<n ; i++)
		deck[i] = i+1 ;
		
		int count = 0 , discard[100] = {0} , remain ;
		for(int i=0 ; i<2*n ; i+=2)
		{
			discard[count++] = deck[i] ;
			deck[n+count-1] = deck[i+1] ;
			
			if(count==n-1)
			{
				remain = deck[i+1] ;
				break ;
			}
		}
		
		cout << "Discarded cards: " << discard[0] ;
		for(int i=1 ; i<count ; i++)
		cout << ", " << discard[i] ;
		
		cout << "\nRemaining card: " << remain << endl ;
	}
	return 0 ;
}
