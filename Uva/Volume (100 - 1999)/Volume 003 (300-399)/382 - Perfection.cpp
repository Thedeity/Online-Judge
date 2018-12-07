#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
	cout << "PERFECTION OUTPUT" << endl ;
	
	int n ;
	while(cin >> n)
	{
		if(n==0)
		{
			cout << "END OF OUTPUT" << endl ;
			return 0 ;
		}
		
		int factor[10000] = {0} ;
		int factor_num = 0 , amount = 0 ;
		for(int i=1 ; i<=n/2 ; i++)
		{
			if(n%i==0)
			{
				factor[factor_num] = i ;
				amount += factor[factor_num] ;
				factor_num ++ ;
			}
		}
		
		cout << setw(5) << n << "  " ;
		if(amount==n)
		cout << "PERFECT" << endl ;
		else if(amount<n)
		cout << "DEFICIENT" << endl ;
		else if(amount>n)
		cout << "ABUNDANT" << endl ;
	}
}
