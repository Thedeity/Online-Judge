#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	char s[10000] ;
	
	while( cin.getline(s,10000) )
	{
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if( (s[i]>='a') && (s[i]<='z') )
			{
				switch(s[i])
				{
					case 'b' :
						cout << "c" ;
						break ;
					case 'c' :
						cout << "z" ;
						break ;
					case 'd' :
						cout << "a" ;
						break ;
					case 'e' :
						cout << "q" ;
						break ;
					case 'f' :
						cout << "s" ;
						break ;
					case 'g' :
						cout << "d" ;
						break ;
					case 'h' :
						cout << "f" ;
						break ;
					case 'i' :
						cout << "y" ;
						break ;
					case 'j' :
						cout << "g" ;
						break ;
					case 'k' :
						cout << "h" ;
						break ;
					case 'l' :
						cout << "j" ;
						break ;
					case 'm' :
						cout << "b" ;
						break ;
					case 'n' :
						cout << "v" ;
						break ;
					case 'o' :
						cout << "u" ;
						break ;
					case 'p' :
						cout << "i" ;
						break ;
					case 'r' :
						cout << "w" ;
						break ;
					case 't' :
						cout << "e" ;
						break ;
					case 'u' :
						cout << "t" ;
						break ;
					case 'v' :
						cout << "x" ;
						break ;
					case 'y' :
						cout << "r" ;
						break ;
				}
			}
			else if( (s[i]>='0')&&(s[i]<='9') )
			{
				if(s[i]=='0')
				cout << "8" ;
				else if(s[i]=='2')
				cout << "`" ;
				else
				cout << char(s[i]-2) ;
			}
			else
			{
				if(s[i]=='-')
				cout << "9" ;
				else if(s[i]=='=')
				cout << "0" ;
				else if(s[i]=='[')
				cout << "o" ;
				else if(s[i]==']')
				cout << "p" ;
				else if(s[i]=='\\')
				cout << ";" ;
				else if(s[i]==',')
				cout << "n" ;
				else if(s[i]=='.')
				cout << "m" ;
				else if(s[i]=='/')
				cout << "," ;
				else if(s[i]==' ')
				cout << " " ;
				else if(s[i]==';')
				cout << "k" ;
				else if(s[i]=='\'')
				cout << "l" ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}

