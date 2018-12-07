#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	long long x ,temp ;
	while(cin >> x)
	{
		int k=0 , coefficient[1000000] ;
		
		while(!cin.eof())
		{
			cin >> coefficient[k++] ;
			if(getchar()=='\n')
			break ;
		}
		
		long long e=0,amount=0,X=x ;
		
		for(int i=k-2 ; i>=0 ; i--,e++)
		{
			temp = coefficient[i] * (e+1) ;
			if(e)
			{
				temp *= X ;
				X *= x ;
			}
			amount += temp ;
		}
		
		cout << amount << endl ;
	}
	return 0 ;
}
