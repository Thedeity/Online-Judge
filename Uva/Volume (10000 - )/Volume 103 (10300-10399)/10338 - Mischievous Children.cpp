#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

unsigned long long power(unsigned long long n)
{
	unsigned long long temp = 1 ;
	for(int i=2 ; i<=n ; i++)
	temp *= i ;
	
	return temp ;
}

int main()
{
	int n,k=1 ;
	cin >> n ;
	
	while(n--)
	{
		char s[21] ;
		cin >> s ;
		
		int len = strlen(s) ;
		sort(s,s+len) ;
		
		int num = 0 , check[26] = {0} ;
		for(int i=0 ; i<len ; i++)
		check[s[i]-'A'] ++ ;
		
		unsigned long long int arrange = power(len) ;
		
		
		for(int i=0 ; i<26 ; i++)
			if(check[i]>1)
				arrange /= power(check[i]) ;
				
		cout << "Data set " << k++ << ": " << arrange << endl  ;
	}
}
