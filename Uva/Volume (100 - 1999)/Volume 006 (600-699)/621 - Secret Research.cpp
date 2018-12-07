#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	
	while(n--)
	{
		char num[10000] ;
		cin >> num ;
		
		int len = strlen(num) ;
		if(strcmp(num,"1")==0 || strcmp(num,"4")==0  || strcmp(num,"78")==0 )
		cout << "+" ;
		else if(len>=3)
		{
			if(num[len-2]=='3' && num[len-1]=='5')
			cout << "-" ;
			else if(num[0]=='9' && num[len-1]=='4')
			cout << "*" ;
			else
			cout << "?" ;
		}
		cout << endl ;
	}
	return 0 ;
}
