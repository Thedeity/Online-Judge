#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

int main()
{
	char X[300],Y[300] ;
	
	while(cin >> X >> Y)
	{
		if(strcmp(X,"0")==0 || strcmp(Y,"0")==0)
		cout << "0" ;
		
		int product[10000] ={0} ;
		int X_len = strlen(X) , Y_len = strlen(Y) ;
		reverse(X,X+X_len) ;
		reverse(Y,Y+Y_len) ;
		
		for(int i=0 ; i<X_len ; i++)
		{
			for(int j=0 ; j<Y_len ; j++)
			product[i+j] += ( X[i]-'0' ) * ( Y[j]-'0' ) ;
		}
		
		for(int i=0 ; i<10000 ; i++)
		{
			if( product[i]>=10 )
			{
				product[i+1] += product[i] / 10 ;
				product[i] %= 10 ;
			}
		}
		
		for(int i=9999 ; i>=0 ; i--)
		{
			if(product[i]!=0)
			{
				for(int j=i ; j>=0 ; j--)
				cout << product[j] ;
				
				break ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}
