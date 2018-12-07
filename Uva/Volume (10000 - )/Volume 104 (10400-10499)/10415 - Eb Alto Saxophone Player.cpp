#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	cin.get() ;
	
	while(t--)
	{
		char note[201] , button[14][11] = { "0111001111" , "0111001110" , "0111001100" , "0111001000" , "0111000000" , "0110000000" , "0100000000" ,
											"0010000000" , "1111001110" , "1111001100" , "1111001000" , "1111000000" , "1110000000" , "1100000000" } ;
		cin.getline(note,201) ;
		
		if(strcmp(note,"\0")==0)
		{
			cout << "0 0 0 0 0 0 0 0 0 0\n" ;
			continue ;
		}
		
		char press[1000][11] ;
		int count[10] = {0} ;
		for(int i=0 ; note[i]!='\0' ; i++)
		{
			if('c'<=note[i] && note[i]<='g')            // c -> 99   to 0
			strcpy( press[i] , button[note[i]-'c'] ) ;
			
			else if('a'<=note[i] && note[i]<='b')       // a -> 97   to 5
			strcpy( press[i] , button[note[i]-92] ) ;
			
			else if('C'<=note[i] && note[i]<='G')       // C -> 67   to 7
			strcpy( press[i] , button[note[i]-60] ) ;
			
			else if('A'<=note[i] && note[i]<='B')       // A -> 65   to 12
			strcpy( press[i] , button[note[i]-53] ) ;
		}
		
		for(int i=0 ; i<10 ; i++)
			if(press[0][i]=='1')
			count[i] ++ ;
		
		
		for(int i=1 ; note[i]!='\0' ; i++)
		{
			for(int j=0 ; j<10 ; j++)	
				if(press[i][j]=='1')
					if(press[i-1][j]=='0')
					count[j] ++ ;
		}
		
		for(int i=0 ; i<10 ; i++)
		{
			if(i)
			cout << " " ;
			cout << count[i]  ;
		}
		
		cout << "\n" ;
	}
	return 0 ;
}
