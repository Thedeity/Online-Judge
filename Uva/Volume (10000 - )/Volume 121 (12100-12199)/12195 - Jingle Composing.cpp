#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[10000] ;
	while( cin.getline(s,10000) )
	{
		int num=0 , temp=0 ;
		
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if(s[i]=='*')
			return 0 ;
			
			if(s[i]=='/')
			{
				if(temp==64)
				num ++ ;
				
				temp = 0 ;
			}	
			else
			{
				if(s[i]=='W')
				temp += 64 ;
				else if(s[i]=='H')
				temp += 32 ;
				else if(s[i]=='Q')
				temp += 16 ;
				else if(s[i]=='E')
				temp += 8 ;
				else if(s[i]=='S')
				temp += 4 ;
				else if(s[i]=='T')
				temp += 2 ;
				else if(s[i]=='X')
				temp += 1 ;
			}
		}
		cout << num << endl ;
	}
}
