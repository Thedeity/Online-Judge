#include<iostream>
using namespace std ;

int main()
{
	int bottle[9] ;
	while(cin >> bottle[0])
	{
		int amount = bottle[0] ;
		
		cin >> bottle[2] >> bottle[1] >> bottle[3] >> bottle[5] >> bottle[4] >> bottle[6] >> bottle[8] >> bottle[7] ;
		
		for(int i=1 ; i<9 ; i++)
		{
			amount += bottle[i] ;
		}

		int stay = 0 , a , b , c ;
		
		for(int i=0 ; i<3 ; i++)
		{
			for(int j=0 ; j<3 ; j++)
			{
				if(j==i)
				continue ;
				else
				{
					for(int k=0 ; k<3 ; k++)
					{
						if( (k==i)||(k==j) )
						continue ;
						else
						{
							if(bottle[i]+bottle[3+j]+bottle[6+k]>stay)
							{
								stay = bottle[i]+bottle[3+j]+bottle[6+k] ;
								a = i , b = j , c = k ;
							}
						}
					}
				}
			}
		}
		int move = amount - stay ;
		
		if(a==0)
		cout << "B" ;
		else if(a==1)
		cout << "C" ;
		else
		cout << "G" ;
		
		if(b==0)
		cout << "B" ;
		else if(b==1)
		cout << "C" ;
		else
		cout << "G" ;
		
		if(c==0)
		cout << "B " ;
		else if(c==1)
		cout << "C " ;
		else cout << "G " ;
		
		cout << move << endl; 
	}
}
