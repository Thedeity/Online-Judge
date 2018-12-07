#include<iostream>
#include<cmath>
using namespace std;

int main(){
	char c ;
	double coordinate[10][5] ;
	int x = 0 ;
	
	while(cin >> c)
	{
		
		if(c=='r')
		{
			coordinate[x][0] = 0 ;
			
			for(int i=1 ; i<5 ; i++)
			cin >> coordinate[x][i] ;
		}
		else if(c=='c')
		{
			coordinate[x][0] = 1 ;
			
			for(int i=1 ; i<4 ; i++)
			cin >> coordinate[x][i] ;
		}
		else if(c=='*')
		{
			break ;
		}
		x++ ;
	}
	
	
	double a,b ;
	int y = 1 ;
	while(cin >> a >> b)
	{
		if( (a==9999.9)&&(b==9999.9) )
		{
			return 0 ;
		}
		
		else
		{
			int inner = 0 ;
			for(int i=0 ; i<x ; i++)
			{
				
				if( coordinate[i][0] == 0 )
				{
					if( (coordinate[i][1]<a)&&(a<coordinate[i][3])&&(coordinate[i][4]<b)&&(b<coordinate[i][2]) )
					{
						cout << "Point " << y << " is contained in figure " << i+1 << endl ;
						inner = 1 ;
					}
				}
				
				if( coordinate[i][0] == 1 )
				{
					if( pow( a-coordinate[i][1],2 ) + pow( b-coordinate[i][2],2 ) < pow(coordinate[i][3],2) )
					{
						cout << "Point " << y << " is contained in figure " << i+1 << endl ;
						inner = 1 ;
					}
				}
				
			}
			
			if(inner==0)
			cout << "Point " << y << " is not contained in any figure" << endl ;
			
			y++ ;
		}
	}
}
