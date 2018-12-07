#include<iostream>
using namespace std ;
 
int main()
{
	long long A,L,k=1 ;
	while(cin >> A >> L)
	{
		if(A<0 && L<0)
		return 0 ;
 
		long long terms = 1 , temp = A ;
		while(temp!=1)
		{
			if(temp%2==0)
			temp /= 2 ;
			else
			temp = 3*temp+1 ;
			
			if(temp>L)
			break ;
			
			terms ++ ;
		}
 
 
		cout << "Case " << k++ << ": A = " << A << ", limit = " << L
			 << ", number of terms = " << terms << endl ;
	}
}
