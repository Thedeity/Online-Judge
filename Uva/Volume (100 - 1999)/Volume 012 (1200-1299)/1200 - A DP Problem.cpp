#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	
	while(t--)
	{
		string s ;
		cin >> s ;
		
		int Algebra = 0 , Constant = 0 ;
		int sign = 1 , change = 0 ;
		
		for(int i=0 ; s[i]!='\0' ; i++)
		{
			if(s[i]=='=')
			{
				change = 1 ;
				sign = 1 ;
			}
			else if(s[i]=='+')
			{
				sign = 1 ;
			}
			else if(s[i]=='-')
			{
				sign = -1 ;
			}
			else if(s[i]!='x')
			{
				int digit_nums = 0 ;
				for(int j=0 ; '0'<=s[i+j] && s[i+j]<='9' ; j++)
				digit_nums ++ ;
				
				if(s[i+digit_nums]=='x')
				{
					if(change)
					Algebra -= sign * (s[i]-'0') * pow(10,digit_nums-1) ;
					else
					Algebra += sign * (s[i]-'0') * pow(10,digit_nums-1) ;
				}
				else
				{
					if(change)
					Constant += sign * (s[i]-'0') * pow(10,digit_nums-1) ;
					else
					Constant -= sign * (s[i]-'0') * pow(10,digit_nums-1) ;
				}
			}
			else if(s[i]=='x')
			{
				if(i==0 || s[i-1]=='+' || s[i-1]=='-' || s[i-1]=='=')
				{
					if(change)
					Algebra -= sign ;
					else
					Algebra += sign ;
				}
			}
		}
		
		if(!Algebra && !Constant)
		cout << "IDENTITY" ;
		else if(!Algebra && Constant)
		cout << "IMPOSSIBLE" ;
		else
		{
			if(Constant % Algebra == 0)
			cout << Constant / Algebra ;
			else
			{
				int ans = double(Constant / Algebra) ;
				cout << ans - 1 ;
			}
		}
		
		cout << endl ;
	}
	return 0 ;
}
