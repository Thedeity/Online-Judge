#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std ;

int main()
{
	char name[2][1000] ;
	while(cin.getline(name[0],1000))
	{
		cin.getline(name[1],1000) ;
		
		int a=0 , b=0 ;
		for(int i=0 ; i<strlen(name[0]) ; i++ )
		{
			if(name[0][i]>=65 && name[0][i]<=90)
			a += name[0][i] - 64 ;
			else if(name[0][i]>=97 && name[0][i]<=122)
			a += name[0][i] - 96 ;
		}
		
		for(int i=0 ; i<strlen(name[1]) ; i++ )
		{
			if(name[1][i]>=65 && name[1][i]<=90)
			b += name[1][i] - 64 ;
			else if(name[1][i]>=97 && name[1][i]<=122)
			b += name[1][i] - 96 ;
		}
		
		double sum_1 = 0 , sum_2 = 0 ;
		while(a!=0)
		{
			sum_1 += a%10 ;
			a /= 10 ;
			if(a==0 && sum_1>=10)
			{
				a = sum_1 ;
				sum_1 = 0 ;
			}
		}
		
		while(b!=0)
		{
			sum_2 += b%10 ;
			b /= 10 ;
			
			if(b==0 && sum_2>=10)
			{
				b = sum_2 ;
				sum_2 = 0 ;
			}
		}
		
		cout << fixed << setprecision(2) << 100*double(sum_1>sum_2 ? sum_2/sum_1 : sum_1/sum_2 )  << " %" << endl ;
	}
}
