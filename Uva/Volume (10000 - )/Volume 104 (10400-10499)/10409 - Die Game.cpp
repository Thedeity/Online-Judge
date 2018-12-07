#include<iostream>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		if(!n)
		return 0 ;
		
		char command[1024][6] ;
		int top = 1 , north = 2 , west = 3 ;
		
		for(int i=0 ; i<n ; i++)
		{
			cin >> command[i] ;
			
			switch(command[i][0])
			{
				int temp ;
				
				case 'n' :
					temp = top ;
					top = 7 - north ;
					north = temp ;
					break ;
					
				case 'e' :
					temp = west ;
					west = 7 - top ;
					top = temp ;
					break ;
					
				case 's' :
					temp = north ;
					north = 7 - top ;
					top = temp ;
					break ;
					
				case 'w' :
					temp = top ;
					top = 7 - west ;
					west = temp ;
					break ;
			}
		}
		cout << top << "\n" ;
	}
	return 0 ;
}
