#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ; 

int main()
{
	int N ;
	while(cin >> N)
	{
		if(N==0)
		return 0 ;
		
		double digit[50] , prime = 0 , temp , all = N*(N-1)/2 ;
		
		for(int i=0 ; i<N ; i++)
		cin >> digit[i] ;
		
		for(int i=0 ; i<N ; i++)
		{
			for(int j=i+1 ; j<N ; j++)
			{
				int a = digit[i] , b = digit[j] ;
				while(a%b!=0)
				{
					temp = a%b ;
					a = b ;
					b = temp ;
				}
				if(b==1)
				prime ++ ;
			}
		}
		
		if(prime!=0)
		cout << fixed << setprecision(6) << sqrt( 6*all / prime ) << endl ;
		else
		cout << "No estimate for this data set." << endl ;
	}
}
