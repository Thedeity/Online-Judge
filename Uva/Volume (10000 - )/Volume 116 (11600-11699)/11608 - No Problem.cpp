#include<iostream>
using namespace std ;

int main()
{
	int S,k=1 ;
	while(cin >> S)
	{
		if(S<0)
		return 0 ;
		
		int add[12] , need[12] ;
		
		for(int i=0 ; i<12 ; i++)
		cin >> add[i] ;
		
		for(int i=0 ; i<12 ; i++)
		cin >> need[i] ;
		
		
		cout << "Case " << k << ":" << endl ;
		
		
		int num = S ;
		for(int i=0 ; i<12 ; i++)
		{
			if(i>0)
			num += add[i-1] ;
			
			if(num>=need[i])
			{
				cout << "No problem! :D" << endl ;
				num -= need[i] ;
			}
			else
			cout << "No problem. :(" << endl ;
		}
		
		k++ ;
	}
}
