#include<iostream>
#include<cstring>
#include<cmath>
using namespace std ;

int main()
{
	char tape[50] ;
	while( cin.getline(tape,50) )
	{
		int ascii = 0 ;
		
		for(int i=0 ; i<strlen(tape) ; i++ )
		{
			if(tape[i]=='|')
			{
				int power = 7 ;
				
				for(int j=1 ; tape[i+j]!='|' ; j++)
				{
					if(tape[i+j]=='o')
					ascii += pow(2,power) ;
					else if(tape[i+j]=='.')
					power++ ;
					
					power-- ;
				}
				cout << char(ascii) ;
				break ;
			}
		}
	}
}
