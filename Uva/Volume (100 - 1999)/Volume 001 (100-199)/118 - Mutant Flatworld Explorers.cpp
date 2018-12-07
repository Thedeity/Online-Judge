#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	
	
	while(!cin.eof())
	{
		int x,y ;
		cin >> x >> y ;
		int flat[50][50] = {{0}} ;
		
		int xo,yo ;
		char direction ;
		while(cin >> xo >> yo >> direction)
		{
			char order[100] ;
			cin >> order ;
			
			int len = strlen(order) , lost = 0 ;
			for(int i=0 ; i<len ; i++)
			{
				if(lost==1)
				break ;
				
				if(order[i]=='L')
				{
					switch(direction)
					{
						case 'N' :
							direction = 'W' ;
							break ;
						case 'W' :
							direction = 'S' ;
							break ;
						case 'S' :
							direction = 'E' ;
							break ;
						case 'E' :
							direction = 'N' ;
							break ;
					}
				}
				else if(order[i]=='R')
				{
					switch(direction)
					{
						case 'N' :
							direction = 'E' ;
							break ;
						case 'E' :
							direction = 'S' ;
							break ;
						case 'S' :
							direction = 'W' ;
							break ;
						case 'W' :
							direction = 'N' ;
							break ;
					}
				}
				else if(order[i]=='F')
				{
					if(flat[xo][yo]==0)
					{
						switch(direction)
						{
							case 'N' :
								yo ++ ;
								break ;
							case 'E' :
								xo ++ ;
								break ;
							case 'S' :
								yo -- ;
								break ;
							case 'W' :
								xo -- ;
								break ;
						}
						if( xo<0 || xo>x || yo<0 || yo>y )
						{
							switch(direction)
							{
								case 'N' :
									yo -- ;
									break ;
								case 'E' :
									xo -- ;
									break ;
								case 'S' :
									yo ++ ;
									break ;
								case 'W' :
									xo ++ ;
									break ;
							}
							flat[xo][yo] = 1 ;
							lost = 1 ;
						}
					}
					
					else if(flat[xo][yo]==1)
					{
						switch(direction)
						{
							case 'N' :
								if(yo+1<y)
								yo ++ ;
								break ;
							case 'E' :
								if(xo+1<x)
								xo ++ ;
								break ;
							case 'S' :
								if(yo-1>0)
								yo -- ;
								break ;
							case 'W' :
								if(xo-1>0)
								xo -- ;
								break ;
						}
					}
				}
			}
			
			cout << xo << " " << yo << " " << direction ;
			
			if(lost==1)
			cout << " LOST" ;
			
			cout << endl ;
		}
	}
	return 0 ;
}
