#include<iostream>
using namespace std ;

int main()
{
	int prime[5000] ;
	prime[0] = 1 , prime[1] = 2 ;
	
	for(int i=3,k=2 ; i<5000 ; i++)
	{
		for(int j=2 ; j<i ; j++)
		{
			if(i%j==0)
			break ;
			
			if(i==j+1)
			{
				prime[k] = i ;
				k++ ;
			}
		}
	}
	
	int N , C ,k=0 ;
	while(cin >> N >> C)
	{
		cout << N << " " << C << ": " ;
		
		int num = 0 ;
		for(int i=0 ; prime[i]<=N ; i++)
		num ++ ;
		
		if( (2*C>=num) || (2*C-1>=num) )
		{
			for(int i=0 ; i<num ; i++)
			{
				cout << prime[i] ;
				if(i!=num-1)
				cout << " " ;
			}
		}
		else if(num%2==0)
		{
			for(int i=num/2-C ; i<=num/2+C-1 ; i++)
			{
				cout << prime[i] ;
				if(i!=num/2+C-1)
				cout << " " ;
			}
		}
		else
		{
			for(int i=num/2+1-C ; i<=num/2+C-1 ; i++)
			{
				cout << prime[i] ;
				if(i!=num/2+C-1)
				cout << " " ;
			}
		}
		
		cout << endl << endl ;
		k++ ;
	}
}

