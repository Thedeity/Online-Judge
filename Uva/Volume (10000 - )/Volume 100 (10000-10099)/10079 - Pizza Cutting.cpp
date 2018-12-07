#include<iostream>
using namespace std ;

int main()
{
	long long int N ;
	while(cin >> N)
	{
		if(N<0)
		return 0 ;
		
		cout << (1+N)*N / 2 + 1 << endl ;
	}
}
