#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>

using namespace std ;

int main()
{
	int n,k=1 ;
	while(cin >> n)
	{
		if(!n)
		return 0 ;
		
		int num[101] , amount = 0 ;
		for(int i=0 ; i<n ; i++)
		{
			cin >> num[i] ;
			amount += num[i] ;
		}
		
		/******************************************/
		
		if(amount==0)
		{
			cout << "Case " << k++ << ":" << endl 
				 << 0 << endl ;
				 
			continue ;
		}
		
		/******************************************/
		
		int a = amount / n ;
		int b = amount ;
		int c = n ;
		b %= c ;
		
		int factor[1000] , z=0 ;
		
		if(b!=0 && b!=1)
		{
			int temp = abs(b) ;
			if(c%temp==0)
			{
				c /= temp ;
				b /= temp ;
			}
			
			else
			{
				int factor[1000] ;
				for(int i=1 ; i<=temp ; i++)
				{
					if(temp%i==0)
					factor[z++] = i ;
				}
				
				for(int i=z-1 ; i>=0 ; i--)
				{
					if(c%factor[i]==0)
					{
						c /= factor[i] ;
						b /= factor[i] ;
						break ;
					}
				}
			}
		}
		
		/******************************************/
		
		cout << "Case " << k++ << ":" << endl ;

		
		int a_len = 0 , b_len = 0 , c_len = 0 ;
		if(amount<0)
		a_len = 2 ;
		
		for(int i=0 ; pow(10,i)<=abs(a) ; i++)
		a_len ++ ;
		
		for(int i=0 ; pow(10,i)<=abs(b) ; i++)
		b_len ++ ;
		
		for(int i=0 ; pow(10,i)<=c ; i++)
		c_len ++ ;
		
		/******************************************/
		
		if(b!=0)
		{
			for(int i=0 ; i<a_len+c_len-b_len ; i++)
			cout << " " ;
			
			cout << abs(b) << endl ;
		}
		
		if(amount<0)
		cout << "- " ;
		
		if(a!=0)
		cout << abs(a) ;
		
		if(b!=0)
		{
			for(int i=0 ; i<c_len ; i++)
			cout << "-" ;
			
			cout << endl ;
			
			for(int i=0 ; i<a_len ; i++)
			cout << " " ;
			
			cout << c ;
		}
		
		cout << endl ;
	}
}
