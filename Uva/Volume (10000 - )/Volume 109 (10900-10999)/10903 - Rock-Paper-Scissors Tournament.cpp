#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std ;

int main()
{
	int n,k ;
	int a = 1 ;
	while(cin >> n >> k)
	{
		if(n==0)
		return 0 ;
		
		if(a>1)
		cout << endl ;
		
		int p1,p2 ;
		char m1[10],m2[10] ;
		int vs = k*n*(n-1)/2 ;
		double player[10000][2] = {{0}} ; // win , lose
		
		for(int i=0 ; i<vs ; i++)
		{
			cin >> p1 >> m1 >> p2 >> m2 ;
			
			if( strcmp(m1,"rock")==0 )
			{
				if( strcmp(m2,"paper")==0 )
				{
					player[p2][0] ++ ;
					player[p1][1] ++ ;
				}
				else if( strcmp(m2,"scissors")==0 )
				{
					player[p1][0] ++ ;
					player[p2][1] ++ ;
				}
			}
			else if( strcmp(m1,"paper")==0 )
			{
				if( strcmp(m2,"scissors")==0 )
				{
					player[p2][0] ++ ;
					player[p1][1] ++ ;
				}
				else if( strcmp(m2,"rock")==0 )
				{
					player[p1][0] ++ ;
					player[p2][1] ++ ;
				}
			}
			else if( strcmp(m1,"scissors")==0 )
			{
				if( strcmp(m2,"rock")==0 )
				{
					player[p2][0] ++ ;
					player[p1][1] ++ ;
				}
				else if( strcmp(m2,"paper")==0 )
				{
					player[p1][0] ++ ;
					player[p2][1] ++ ;
				}
			}
		}
		
		for(int i=1 ; i<n+1 ; i++)
		{
			if(player[i][0]+player[i][1]==0)
			cout << "-" << endl ;
			else
			cout << fixed << setprecision(3) << player[i][0] / (player[i][0]+player[i][1]) << endl ;
		}
		a++ ;
	}
}
