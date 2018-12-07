#include<iostream>
#include<cstring>
using namespace std ;

int prime(int n)
{
	int num = 0 ;
	for(int i=2 ; i<n ; i++)
	{
		if(n%i==0)
		return 0 ;
	}
	
	return 1 ;
}

int main(){
	int n,k=1 ;
	cin >> n ;
	
	while(n)
	{
		int check = 0;
		char s[2001] ;
		cin >> s ;
		
		int f[62] = {0} ;   //  0~25¬°A-Z   26~36¬°0-9   37~62¬°a-z 
		
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if( (s[i]>='0')&&(s[i]<='9') )
			f[ int(s[i]) - 22 ] ++ ;  // '0' = 48
			
			else if( (s[i]>='A')&&(s[i]<='Z')  ) 
			f[ int(s[i]) - 65 ] ++ ;
			
			else
			f[ int(s[i]) - 61 ] ++ ;
		}
		
		cout << "Case " << k << ": " ;
		
		
		for(int i=26 ; i<36 ; i++)
		{
			if( (f[i]>1)&&(prime(f[i])==1) )
			{
				cout << char(i+22) ;
				check = 1 ;
			}
		}
		
		for(int i=0 ; i<26 ; i++)
		{
			if( (f[i]>1)&&(prime(f[i])==1) )
			{
				cout << char(i+65) ;
				check = 1 ;
			}
		}
		
		for(int i=36 ; i<62 ; i++)
		{
			if( (f[i]>1)&&(prime(f[i])==1) )
			{
				cout << char(i+61) ;
				check = 1 ;
			}
		}
		
		
		if(check==0)
		cout << "empty" ;
		
		cout << endl ;
		
		k++,n-- ;
	}
	
	return 0 ;
}

