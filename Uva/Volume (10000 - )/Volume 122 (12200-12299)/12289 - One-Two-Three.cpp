#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n ;
	cin >> n ;
	
	while(n)
	{
		char s[5] ;
		cin >> s ;
		int len = strlen(s) ;
		
		if(len==5)
		cout << "3" << endl ;
		else if ( s[0]=='o' )
		{
			if( ( s[1]=='n')||( s[2]=='e' ) )
			cout << "1" << endl ;
			else
			cout << "2" << endl ;
		}
		else
		{
			if( (s[1]=='n')&&(s[2]=='e') )
			cout << "1" << endl ;
			else
			cout << "2" << endl ;
		}
		
		n-- ;
	}
	return 0 ;
}
