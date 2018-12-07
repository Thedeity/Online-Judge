#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

int main(){
	int n ;
	
	while(1)
	{
		cin >> n ;
		if(n==0)
		break ;
		
		char s[100] ;
		cin >> s ;
		
		int temp = strlen(s) / n ;
		for(int i=0 ; i<n ; i++)
		{
			reverse(s+i*temp,s+(i+1)*temp) ;
		}
		cout << s << endl ;
	}
	
	return 0 ;	
}
