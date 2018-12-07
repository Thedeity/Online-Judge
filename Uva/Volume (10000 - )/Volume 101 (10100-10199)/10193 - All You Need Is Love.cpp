#include<iostream>
#include<cstring>
#include<cmath>
using namespace std ;

int main()
{
	int N,k=1 ;
	cin >> N ;
	
	while(N)
	{
		char S[31] , L[31] ;
		cin >> S >> L ;
		
		int S_length = strlen(S) ;
		int L_length = strlen(L) ;
		if( (S_length==1)||(S[0]=='0')||(L_length==1)||(L[0]=='0') )
		{
			cout << "Pair #" << k << ": Love is not all you need!" << endl ;
			k++,N-- ;
			break ;
		}
		
		long long int a=0,b=0 ;
		for(long long int i=0 ; i<S_length ; i++)
		{
			if(S[S_length-1-i]=='1')
			a += pow(2,i) ;
		}
		
		for(int i=0 ; i<L_length ; i++)
		{
			if(L[L_length-1-i]=='1')
			b += pow(2,i) ;
		}
		
		long long int temp = 0 ;
		while(a%b!=0)
		{
			temp = a % b ;
			a = b ;
			b = temp ;
		}
		
		if(temp!=1)
		cout << "Pair #" << k << ": All you need is love!" << endl ;
		else
		cout << "Pair #" << k << ": Love is not all you need!" << endl ;
		
		k++,N-- ;
	}
	return 0 ;
}
