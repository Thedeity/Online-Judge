#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int n,k=1 ;
	cin >> n ;
	
	while(n)
	{
		char s[1000] ;
		cin >> s ;
		
		
		cout << "Case " << k << ": " ;
		for(int i=0 ; i<strlen(s) ; i++)
		{
			int temp = 0 ;
			if( (s[i]>='A') && (s[i]<='Z') )
			{
				if( ( s[i+1]>='0' ) && ( s[i+1]<='9' ) )
				{
					if( (i+2<strlen(s)) && ( s[i+2]>='0' ) && ( s[i+2]<='9' ) )
					{
						if( (i+3<strlen(s)) && ( s[i+3]>='0' ) && ( s[i+3]<='9' ) )
						temp = (int(s[i+3]) - 48) + 10*(int(s[i+2]) - 48) + 100*(int(s[i+1]) - 48) ;
						else
						temp = (int(s[i+2]) - 48) + 10*(int(s[i+1]) - 48) ;
					}
					else
					temp = (int(s[i+1]) - 48) ;
				}
				
				for(int j=0 ; j<temp ; j++)
				cout << s[i] ;
			}
		}
		
		cout << endl ;
		k++,n-- ;
	}
	return 0 ;
}
