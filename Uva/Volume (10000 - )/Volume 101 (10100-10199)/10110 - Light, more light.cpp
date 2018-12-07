#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		if(n<=0)
		return 0 ;
		
		long long int root = sqrt(n) ;
		
		if( root*root==n )
		cout << "yes" << endl ;
		else
		cout << "no" << endl ;
	}
}
