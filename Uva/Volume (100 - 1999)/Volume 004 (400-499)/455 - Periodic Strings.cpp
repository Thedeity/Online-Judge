#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int n,k=0 ;
	cin >> n ;

	int temp = n*2 ;
	while(temp)
	{
		temp-- ;
		
		char s[160] ;
		cin.getline(s,160) ;
		cin.get() ;
		
		int len = strlen(s) , cycle = 1 ;
		
		if(len==0)
		continue ;
		
		if(k)
		cout << endl ;
		k++ ;
		
		for(int i=0 ; i<len-cycle ; )
		{
			if(cycle>len/2)
			{
				cycle = len ;
				break ;
			}
			
			if(len%cycle!=0)
			{
				i = 0 ;
				cycle ++ ;
			}
			else if(s[i]!=s[i+cycle])
			{
				i = 0 ;
				cycle ++ ;
			}
			else
			i++ ;
		}
		
		cout << cycle << endl ;
	}
	return 0 ;
}
