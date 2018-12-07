#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
	int N ;
	while(cin >> N)
	{
		long long int temp = 1 , digit[10001] = {0} ;
		for(int i=0 ; i<N ; i++)
		{
			temp *= i+1 ;
			
			while(temp%10==0)
			temp/=10 ;
			
			if(temp/100000>0)
			temp %= 100000 ;
			
			long long int x = temp ;

			while(x>10)
			{
				if(x%10==0)
				x /= 10 ;
				else
				x %= 10 ;
			}
			
			digit[i] = x ;
		}
		
		
		cout << setw(5) << N << " -> " << digit[N-1] << endl ;
	}
}
