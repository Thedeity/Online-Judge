#include<iostream>
#include<cmath>
#include<cstring>
using namespace std ;

int main(){
	char n[1000] ;
	while(cin >> n)
	{
		if(strcmp(n,"0")==0)
		break ;
		
		int a=0,b=0 ;
		for(int i=0 ; i<strlen(n) ; i++)
		{
			if(i%2==0)
			a += int(n[i])-48 ;
			else
			b += int(n[i])-48 ;
		}
		
		int temp = abs(a-b) ;
		
		if(temp%11==0)
		cout << n << " is a multiple of 11." << endl ;
		else
		cout << n << " is not a multiple of 11." << endl ;
	}
	
	return 0 ;
}
