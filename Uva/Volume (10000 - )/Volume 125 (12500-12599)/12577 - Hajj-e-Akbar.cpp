#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int k=1 ;
	char s[10] ;
	while(cin >> s)
	{
		if(strcmp(s,"Hajj")==0)
		cout << "Case " << k << ": Hajj-e-Akbar" << endl ;
		else if(strcmp(s,"Umrah")==0)
		cout << "Case " << k << ": Hajj-e-Asghar" << endl ;
		else if(strcmp(s,"*")==0)
		return 0 ;
		
		k++ ;
	}
}
