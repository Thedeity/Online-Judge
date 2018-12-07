#include<iostream>
using namespace std ;
 
int main()
{
	long long int n ;
	while(cin >> n)
	{
		long long int sol = 0 ;
		for(int i=0 ; i<=n ; i++)
		{
			if((n-i)%2==0)
			sol += (n-i)/2 + 1 ;
		}
 
		cout << sol << endl ;
	}
}