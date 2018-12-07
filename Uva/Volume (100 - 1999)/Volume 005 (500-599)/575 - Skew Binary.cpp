#include<iostream>
#include<cstring>
#include<cmath>

using namespace std ;

int main()
{
	char s[33] ;
	while(cin >> s)
	{
		if(strcmp(s,"0")==0)
		return 0 ;
		
		int len = strlen(s) ;
		
		int num = 0 ;
		for(int i=len-1,j=1 ; i>=0 ; i--,j++)
		num += ( s[i]-'0' ) * ( pow(2,j)-1 ) ;
		
		cout << num << endl ;
	}
}
