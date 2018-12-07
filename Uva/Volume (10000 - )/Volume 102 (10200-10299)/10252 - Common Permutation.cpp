#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[2][1001] ;
	while(cin.getline(s[0],1001))
	{
		cin.getline(s[1],1001) ;
		int set[2][128] = {{0}} ;
		
		for(int i=0 ; i<strlen(s[0]) ; i++)
		set[0][ s[0][i] ] ++ ;
		
		for(int i=0 ; i<strlen(s[1]) ; i++)
		set[1][ s[1][i] ] ++ ;
		
		for(int i=0 ; i<128 ; i++)
		{
			if(set[0][i] && set[1][i])
			{
				for(int j=0 ; j<( set[0][i]<set[1][i] ? set[0][i] : set[1][i] ) ; j++)
				cout << char(i) ;
			}
		}
		
		cout << endl ;
	}
}
