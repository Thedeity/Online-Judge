#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[30] ;
	while(cin >> s)
	{
		for(int i=0 ; s[i]!='\0' ; i++)
		{
			if(s[i]=='0')
			cout << 0 ;
			else if(s[i]=='1')
			cout << 1 ;
			else if(s[i]=='-')
			cout << "-" ;
			else if(s[i]<='C')
			cout << 2 ;
			else if(s[i]<='F')
			cout << 3 ;
			else if(s[i]<='I')
			cout << 4 ;
			else if(s[i]<='L')
			cout << 5 ;
			else if(s[i]<='O')
			cout << 6 ;
			else if(s[i]<='S')
			cout << 7 ;
			else if(s[i]<='V')
			cout << 8 ;
			else if(s[i]<='Z')
			cout << 9 ;
			else
			continue ;
		}
		cout << endl ;
	}
}
