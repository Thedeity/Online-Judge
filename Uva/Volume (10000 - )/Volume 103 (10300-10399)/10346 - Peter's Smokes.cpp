#include<iostream>
using namespace std ;

int main()
{
	int n,k ;
	while(cin >> n >> k)
	{
		int amount = n ;
		while(n/k>0)
		{
			int temp = n/k ;
			amount += n/k ;
			n %= k ;
			n += temp ;
		}
		cout << amount << endl ;
	}
}
