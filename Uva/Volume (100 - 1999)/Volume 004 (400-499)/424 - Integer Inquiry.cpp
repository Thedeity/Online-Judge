#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int digit[101] = {0} ;
	char s[101] ;
	while(cin >> s)
	{
		int len = strlen(s) ;
		
		if(strcmp(s,"0")==0)
		{
			int index ;
			for(int i=100 ; i>=0 ; i--)
			{
				if(digit[i]!=0)
				{
					index = i ;
					break ;
				}
			}
			
			for(int i=index ; i>=0 ; i--)
			cout << digit[i] ;
			
			cout << endl ;
			return 0 ;
		}
		
		for(int i=0 ; i<len ; i++)
		{
			digit[i] += int(s[len-1-i]) - 48 ;
			
			if(digit[i]>=10)
			{
				digit[i] -= 10 ;
				digit[i+1] ++ ;
			}
		}
	}
}
