#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std ;

int main()
{
	int N = 0 ;
	while(N || cin >> N)
	{
		int times = 0 , number[20] = {0} ;
		char input[20] ;
		cin >> input ;
		
		int len = strlen(input) ;
		for(int i=0 ; i<len ; i++)
		number[i] = input[i] - 48 ;
		
		int palindrome = 0 ;
		while(!palindrome)
		{
			for(int i=0 ; i<=len/2 ; i++)
			{
				if(number[i]!=number[len-1-i])
				{
					palindrome = 0 ;
					break ;
				}
				
				if(i==(len-1)/2)
				palindrome = 1 ;
			}
			
			if(palindrome==0)
			{
				int temp = len , reverse[20] ;
				
				for(int i=0 ; i<temp ; i++)
				reverse[i] = number[temp-1-i] ;
				
				for(int i=0 ; i<temp ; i++)
				number[i] += reverse[i] ;
				
				for(int i=0 ; i<temp ; i++)
				{
					if(number[i]>=10)
					{
						if(i==temp-1)
						len ++ ;
						
						number[i] %= 10 ;
						number[i+1] ++ ;
					}
				}
				
				times ++ ;
			}
		}
		
		
		cout << times << " " ;
		
		for(int i=0 ; i<len ;i++)
		cout << number[i] ;
		
		cout << endl ;
		N-- ;
	}
	return 0 ;
}
