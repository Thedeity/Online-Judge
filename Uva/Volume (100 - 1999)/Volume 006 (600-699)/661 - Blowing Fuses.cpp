#include<iostream>
using namespace std ;

int main()
{
	int n,m,c,k=1 ;
	while(cin >> n >> m >> c)
	{
		if(n==0&&m==0&&c==0)
		return 0 ;
		
		
		int fuse = 0 ;
		int consump[20] = {0} , turn[20] = {0} ;
		for(int i=0 ; i<n ; i++)
		cin >> consump[i] ;
		
		int electrity = 0 , max = 0 , temp ;
		for(int i=0 ; i<m ; i++)
		{
			cin >> temp ;
			if(turn[temp-1]==0)
			{
				electrity += consump[temp-1] ;
				turn[temp-1] = 1 ;
			}
			else
			{
				electrity -= consump[temp-1] ;
				turn[temp-1] = 0 ;
			}
			
			if(electrity>c)
			fuse = 1 ;
			
			if(electrity>max)
			max = electrity ;
		}
		
		cout << "Sequence " << k << endl ;
		k++ ;
		
		if(fuse==0)
		cout << "Fuse was not blown." << endl << "Maximal power consumption was " << max <<" amperes." << endl << endl ;
		else
		cout << "Fuse was blown." << endl << endl ;
		
	}
}
