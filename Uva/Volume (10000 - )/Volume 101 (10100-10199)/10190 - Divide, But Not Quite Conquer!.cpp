#include<iostream>
using namespace std ;

int main()
{
	int n,m ;
	while(cin >> n >> m)
	{
		if(n<=1 || m<=1)
		{
			cout << "Boring!" << endl ;
			continue ;
		}
		
		int num[10000] , boring = 0 ;
		for(int i=0 ; i>=0 ; i++)
		{
			if(n==0)
			break ;
			
			num[i] = n ;
			if(num[i]%m!=0 && num[i]!=1 )
			{
				boring = 1 ;
				break ;
			}
			else
			n /= m ;
		}
		
		if(boring)
		cout << "Boring!" ;
		else
		{
			for(int i=0 ; i<10000 ; i++)
			{
				if(i)
				cout << " " ;
				
				cout << num[i] ;
				
				if(num[i]==1)
				break ;
			}
		}
		
		cout << endl ;
	}
}
