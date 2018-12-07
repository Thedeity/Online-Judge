#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int N ;
	cin >> N ;
	
	while(N)
	{
		char s[4] ;
		int n1,n2 ;
		
		for(int i=0 ; i<4 ; i++)
		{
			cin >> s[i] ;
		}
		cin >> n1 ;
		
		n2 = (int(s[0])-65)*676 + (int(s[1])-65)*26 + (int(s[2]-65)) ;
		
		
		if(abs(n1-n2)<=100)
		cout << "nice" << endl ;
		else
		cout << "not nice" << endl ;
		
		N-- ;
	}
	return 0 ;	
}
