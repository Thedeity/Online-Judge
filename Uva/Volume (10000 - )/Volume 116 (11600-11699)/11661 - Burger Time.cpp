#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std ;

int main()
{
	int L ;
	while(cin >> L)
	{
		cin.get() ;
		int Z = 0 ;
		
		if(L==0)
		return 0 ;
		
		char s[3000000] ;
		cin.getline(s,3000000) ;
		
		char local = 'Z' ;
		int b=1 ;
		int distance = 2147483647 ;
		 
		int c=0 ;
		for(int i=0 ; i<L ; i++)
		{
			if( (c==0)&&(s[i]!='.') )
			{
				b = 1 ;
				c = 1 ;
			}
			
			if(s[i]=='R')
			{
				if(local == 'R')
				b = 1 ;
				else if(local == 'D')
				{
					if(b<distance)
					distance = b ;
					b = 1 ;
				}
				
				local = 'R' ;
			}
			else if(s[i]=='D')
			{
				if(local == 'D')
				b = 1 ;
				else if(local == 'R')
				{
					if(b<distance)
					distance = b ;
					b = 1 ;
				}
				
				local = 'D' ;
			}
			else if(s[i]=='Z')
			{
				Z = 1 ;
				break ;
			}
			else
			b++ ;
		}
		
		if(Z==1)
		cout << "0" << endl ;
		else
		cout << distance << endl ;
	}
}


