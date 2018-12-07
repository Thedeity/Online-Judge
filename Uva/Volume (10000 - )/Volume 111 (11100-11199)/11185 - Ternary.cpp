#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	long long int N ;
	while(cin >> N)
	{
		if(N<0)
		return 0 ;
		else if(N==0)
		{
			cout << "0" << endl ;
			continue ;
		}
		
		int bit_number=0 , temp = N ;
		for(int i=0 ; i<100 ; i++)
		{
			if(temp!=0)
			{
				temp/= 3 ;
				bit_number++ ;
			}
			else
			break ;
		}
		
		int num[10000] ;
		for(int i=bit_number,j=0 ; i>0 ; i--,j++)
		{
			temp = N/pow(3,i-1) ;
			num[j] = temp ;
			N -= temp * pow(3,i-1) ;
		}
		
		for(int i=0 ; i<bit_number ; i++)
		cout <<num[i] ;
		
		cout << endl ;
	}
}
