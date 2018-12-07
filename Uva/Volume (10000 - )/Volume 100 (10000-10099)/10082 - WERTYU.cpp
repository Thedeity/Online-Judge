#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	char s[10000] ;
	
	while( cin.getline(s,10000) )
	{
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if( (s[i]>='A') && (s[i]<='Z') )
			{
				switch(s[i])
				{
					case 'B' :
						cout << "V" ;
						break ;
					case 'C' :
						cout << "X" ;
						break ;
					case 'D' :
						cout << "S" ;
						break ;
					case 'E' :
						cout << "W" ;
						break ;
					case 'F' :
						cout << "D" ;
						break ;
					case 'G' :
						cout << "F" ;
						break ;
					case 'H' :
						cout << "G" ;
						break ;
					case 'I' :
						cout << "U" ;
						break ;
					case 'J' :
						cout << "H" ;
						break ;
					case 'K' :
						cout << "J" ;
						break ;
					case 'L' :
						cout << "K" ;
						break ;
					case 'M' :
						cout << "N" ;
						break ;
					case 'N' :
						cout << "B" ;
						break ;
					case 'O' :
						cout << "I" ;
						break ;
					case 'P' :
						cout << "O" ;
						break ;
					case 'R' :
						cout << "E" ;
						break ;
					case 'S' :
						cout << "A" ;
						break ;
					case 'T' :
						cout << "R" ;
						break ;
					case 'U' :
						cout << "Y" ;
						break ;
					case 'V' :
						cout << "C" ;
						break ;
					case 'W' :
						cout << "Q" ;
						break ;
					case 'X' :
						cout << "Z" ;
						break ;
					case 'Y' :
						cout << "T" ;
						break ;
				}
			}
			else if( (s[i]>='0')&&(s[i]<='9') )
			{
				if(s[i]=='0')
				cout << "9" ;
				else if(s[i]=='1')
				cout << "`" ;
				else
				cout << char(s[i]-1) ;
			}
			else
			{
				if(s[i]=='-')
				cout << "0" ;
				else if(s[i]=='=')
				cout << "-" ;
				else if(s[i]=='[')
				cout << "P" ;
				else if(s[i]==']')
				cout << "[" ;
				else if(s[i]=='\\')
				cout << "]" ;
				else if(s[i]==',')
				cout << "M" ;
				else if(s[i]=='.')
				cout << "," ;
				else if(s[i]=='/')
				cout << "." ;
				else if(s[i]==' ')
				cout << " " ;
				else if(s[i]==';')
				cout << "L" ;
				else if(s[i]=='\'')
				cout << ";" ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}
