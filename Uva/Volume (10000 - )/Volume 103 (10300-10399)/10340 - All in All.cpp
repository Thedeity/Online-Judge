#include<iostream>
#include<cstring>

using namespace std ;

int main(){
	char s[100000],t[100000] ;
	
	while(cin >> s >> t)
	{
		int k = 0 ;
		int len = strlen(s) ;
		
		for(int i=0 ; i<strlen(t) ; i++)
		{
			if(s[k]==t[i])
			k++ ;
			
			if(k==len)
			break ;
		}
		
		if(k==len)
		cout << "Yes" << endl ;
		else
		cout << "No" << endl ;
	}
	
	return 0 ;
}
