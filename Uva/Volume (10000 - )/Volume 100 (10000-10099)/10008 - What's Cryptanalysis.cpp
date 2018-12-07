#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int word[26]= {0} ;
	
	int n ;
	cin >> n ;
	cin.get() ;
	while(n)
	{
		char s[1000] ;
		cin.getline(s,1000) ;
		
		int len = strlen(s) ;
		for(int i=0 ; i<len ; i++)
		{
			if( (s[i]>=65)&&(s[i]<=90) )
			word[s[i]-65] ++ ;
			else if( (s[i]>=97)&&(s[i<=122]) )
			word[s[i]-97] ++ ;
		}
		n-- ;
	}
	
	for(int i=0 ; i<26 ; i++)
	{
		int temp = 0 ;
		for(int j=0 ; j<26 ; j++)
		{
			if(word[j]>=temp)
			temp = word[j] ;
		}
		for(int k=0 ; k<26 ; k++)
		{
			if( (word[k]==temp)&&(temp!=0) )
			{
				cout << char(k+65) << " " << temp << endl ;
				word[k] = 0 ;
			}
		}
	}
}

