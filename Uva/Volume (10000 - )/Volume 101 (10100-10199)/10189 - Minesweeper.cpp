#include<iostream>
using namespace std ;

int main()
{
	int n,m,k=0 ;
	while(cin >> n >> m)
	{
		if(n==0 || m==0) 
		return 0 ;
		
		if(k)
		cout << endl ;
		
		char flat[100][100] = {{'\0'}} ;
		
		for(int i=0 ; i<n ; i++)
		cin >> flat[i] ;
		
		int around[100][100] = {0} ;
		
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<m ; j++)
			{
				if(flat[i][j]=='*')
				{
					if(i)  // up
					around[i-1][j] ++ ;
					
					if(i && j)
					around[i-1][j-1] ++ ;
					
					if(j)  // left
					around[i][j-1] ++ ;
					
					if(j && i+1<n )
					around[i+1][j-1] ++ ;
					
					if(i+1<n)  // down
					around[i+1][j] ++ ;
					
					if(i+1<n && j+1<m)
					around[i+1][j+1] ++ ;
					
					if(j+1<m)  // right
					around[i][j+1] ++ ;
					
					if(i && j+1<m)
					around[i-1][j+1] ++ ;
				}
			}
			
		cout << "Field #" << ++k << ":" << endl ;
		
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				if(flat[i][j]=='*')
				cout << "*" ;
				else
				cout << around[i][j] ;
			}
			cout << endl ;
		}
	}
}
