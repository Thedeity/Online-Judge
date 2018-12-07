#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[2000000] ;
	while(cin >> s)
	{
		if(strcmp(s,"END")==0)
		return 0 ;
		
		int len = strlen(s) ;
		if(len==1)
		{
			if(strcmp(s,"1")==0)
			cout << 1 << endl ;
			else
			cout << 2 << endl ;
		} 
		else if(len<10)
		cout << 3 << endl ;
		else
		cout << 4 << endl ;
	}
}
