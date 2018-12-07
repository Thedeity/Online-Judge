#include<iostream>
using namespace std ;

int main()
{
	long long S,D ;
	while(cin >> S >> D)
	{
		long long day = 0 ;
		
		while(day<D)
		day += S++ ;
		
		cout << S-1 << "\n" ;
	}
	return 0 ;
}
