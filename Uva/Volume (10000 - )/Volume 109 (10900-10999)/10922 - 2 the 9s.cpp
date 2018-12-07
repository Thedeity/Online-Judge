#include<iostream>
#include<cstring>
#include<cmath>
using namespace std ;

int main()
{
	char s[1000] ;
	while(cin >> s)
	{
		if(strcmp(s,"0")==0)
		return 0 ;
		
		
		int amount = 0 , degree = 1 ;
		for(int i=0 ; i<strlen(s) ; i++)
		amount += int(s[i])-48 ;
		
		
		if(amount%9==0)
		{
			while(amount!=9)
			{
				int new_amount = 0 , temp = amount ;
				for(int i=0 ; pow(10,i)<amount ; i++)
				{
					new_amount += temp%10 ;
					temp /= 10 ;
				}
				amount = new_amount ;
				degree ++ ;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << degree << "." << endl ;
		}
		else
		cout << s << " is not a multiple of 9." << endl ;
	}
}
