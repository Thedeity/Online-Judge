#include<iostream>
#include<cmath>
#include<cstring>
using namespace std ;

int convert_binary(int n)
{
	int temp = -1 , b = 0 ;
	
	for(int i=0 ; pow(2,i)<=n ; i++)
	temp ++ ;
	
	for(int i=temp ; i>=0 ; i--)
	{
		int bit = pow(2,i) ;
		if(n>=bit)
		{
			n -= bit ;
			b ++ ;
		}
	}
	return b ;
}


int main()
{
	int N ;
	cin >> N ;
	
	while(N--)
	{
		int M , b1=0 , b2=0 ;
		cin >> M ;
		
		b1 = convert_binary(M) ;
		
		int hex_M = 0 , p = 0 ;
		while(M>0)
		{
			int temp = M%10 ;
			hex_M += temp * pow(16,p++) ;
			M /= 10 ;
		}
		
		b2 = convert_binary(hex_M) ;
		
		cout << b1 << " " << b2 << endl ;
	}
}
