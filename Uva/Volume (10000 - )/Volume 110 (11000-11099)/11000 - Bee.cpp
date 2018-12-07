#include<iostream>
using namespace std ;

int main()
{
	int N ;
	while(cin >> N)
	{
		if(N==-1)
		return 0 ;
		
		long long int male[20000] ;
		male[0] = 0 , male[1] = 1 , male[2] = 2 ;
		
		for(int i=3 ; i<N+1 ; i++)
		male[i] = male[i-1] + male[i-2] + 1 ;
		
		cout << male[N] << " " << male[N] + male[N-1] + 1 << endl ;
	}
	return 0 ;
}
