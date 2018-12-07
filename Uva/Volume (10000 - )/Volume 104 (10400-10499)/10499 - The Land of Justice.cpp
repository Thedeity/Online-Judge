#include<iostream>
using namespace std ;

int main()
{
	long long int n ;
	while(cin >> n)
	{
		if(n<0)
		break ;
		
		long long int profit = n*25 ;
		
		if(n==1)
		profit = 0 ;
		
		cout << profit << "%" << endl ;
	}
	return 0 ;
}
