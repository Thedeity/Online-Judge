#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[2][10000] ;
	int n ;
	cin >> n ;
	while(n)
	{
		for(int i=0 ; i<2 ; i++)
		cin >> s[i] ;
		
		int len_1 = strlen(s[0]) ;
		int len_2 = strlen(s[1]) ;
		
		int big = 1 ;
		if(len_1<len_2)
		big = 2 ;
		if(len_1==len_2)
		{
			for(int i=0 ; i<len_1 ; i++)
			{
				if(s[0][i]>s[1][i])
				break ;
				
				if(s[0][i]<s[1][i])
				{
					big = 2 ;
					break ;
				}
			}
		}
		
		int a[10000] = {0} , b[10000] = {0} ;
		for(int i=0 ; i<10000 ; i++)
		{
			if( (s[0][i]>='0')&&(s[0][i]<='9') )
			a[i] = int(s[0][i]) - 48 ;
			
			if( (s[1][i]>='0')&&(s[1][i]<='9') )
			b[i] = int(s[1][i]) - 48 ;
		}
		
		
		int profit[10000] = {0} ;
		if(big==1)
		{
			for(int i=0 ; i<len_1 ; i++)
			{
				if(len_2>=i+1)
				profit[i] += a[len_1-1-i] - b[len_2-1-i] ;
				else
				profit[i] += a[len_1-1-i] ;
				
				if(profit[i]<0)
				{
					profit[i] += 10 ;
					profit[i+1] -- ;
				}
			}
		}
		else
		{
			for(int i=0 ; i<len_2 ; i++)
			{
				if(len_1>=i+1)
				profit[i] += b[len_2-1-i] - a[len_1-1-i] ;
				else
				profit[i] += b[len_2-1-i] ;
				
				if(profit[i]<0)
				{
					profit[i] += 10 ;
					profit[i+1] -- ;
				}
			}
		}
		
		int index = 0 ;
		for(int i=9999 ; i>=0 ; i--)
		{
			if(profit[i]!=0)
			{
				index = i ;
				break ;
			}
		}
		
		if(big==2)
		cout << "-" ;
		
		for(int i=index ; i>=0 ; i--)
		cout << profit[i] ;
		
		cout << endl ;
		n-- ;
	}
	return 0 ;
}
