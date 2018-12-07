#include<iostream>
using namespace std ;

int main()
{
	char s[21] ;
	while(cin >> s)
	{
		int soundex = 0 ;
		for(int i=0 ; s[i]!='\0' ; i++)
		{
			switch(s[i])
			{
				case 'B' :
				case 'F' :
				case 'P' :
				case 'V' :
					if(soundex!=1)
					cout << "1" ;
					soundex = 1 ;
					break ;
					
				case 'C' :
				case 'G' :
				case 'J' :
				case 'K' :
				case 'Q' :
				case 'S' :
				case 'X' :
				case 'Z' :
					if(soundex!=2)
					cout << "2" ;
					soundex = 2 ;
					break ;
					
				case 'D' :
				case 'T' :	
					if(soundex!=3)
					cout << "3" ;
					soundex = 3 ;
					break ;
					
				case 'L' :
					if(soundex!=4)
					cout << "4" ;
					soundex = 4 ;
					break ;
					
				case 'M' :
				case 'N' :
					if(soundex!=5)
					cout << "5" ;
					soundex = 5 ;
					break ;
					
				case 'R' :
					if(soundex!=6)
					cout << "6" ;
					soundex = 6 ;
					break ;
					
				default :
					soundex = 0 ;
			}
		}
		cout << endl ;
	}
}
