#include<iostream>
using namespace std;

int main()
{
	int count=0 ;
	int number ;
	double rectangle[10][4] ;
	while(1)
	{
		char temp ;
		cin >> temp ;
		if( temp=='r' )
		{
			for(int i=0 ; i<4 ; i++)
			{
				cin >> rectangle[count][i] ;
			}
			count++ ;
		}
		else if( temp=='*' )
		{
			break ;
		}
	}
	
	int key = 1 ;
	int check = 2 ;
	while(key==1)
	{
		double point[10000][2] ;
		for(int i=0 ; i<10000 ; i++)
		{
			cin >> point[i][0] >> point[i][1] ;
			if( (point[i][0]==9999.9)&&(point[i][1]==9999.9) )
			{
				key = 0 ;
				break ;
			}
			else
			{
				check = 0 ;
				for(int j=0 ; j<count ; j++)
				{
					if(( point[i][0] > rectangle[j][0] ) && ( point[i][0] < rectangle[j][2] ) )
					{
						if(( point[i][1] > rectangle[j][3] ) && ( point[i][1] < rectangle[j][1] ) )
						{
							cout << "Point " << i+1 << " is contained in figure " << j+1 << endl ;
							check = 1 ;
						}
					}
				}
				if(check==0)
				{
					cout << "Point " << i+1 << " is not contained in any figure" << endl ;
				}
			}
		}
	}
}
