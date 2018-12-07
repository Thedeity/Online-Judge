#include<iostream>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		if(n<=0)
		return 0 ;
		
		long long int num[50] ;
		num[0] = 1 , num[1] = 2 ;
		
		for(int i=2 ; i<n ; i++)
		{
			num[i] = num[i-1] + num[i-2] ;
		}
		
		cout << num[n-1] << endl ;
	}
}
