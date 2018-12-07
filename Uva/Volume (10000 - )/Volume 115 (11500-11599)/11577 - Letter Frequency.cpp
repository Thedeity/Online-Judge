#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int n ;
	cin >> n ;
	cin.get() ;
	while(n)
	{
		char s[2000000] ;
		cin.getline(s,2000000) ;
		
		int f[26] = {0} ;
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if( (s[i]>='A')&&(s[i]<='Z') )
			{
				f[ int(s[i])-65 ] ++ ;
			}
			else if( (s[i]>='a')&&(s[i]<='z') )
			{
				f[ int(s[i])-97 ] ++ ;
			}
		}
		
		/*************************************************/
		
		int temp = 0 ;

		for(int i=0 ; i<26 ; i++)
		{
			if(f[i]>temp)
			temp = f[i] ;
		}
		
		for(int i=0 ; i<26 ; i++)
		{
			if(f[i]==temp)
			cout << char(i+97) ;
		}
		
		cout << endl ;
		n-- ;
	}
	
	return 0 ;
}
