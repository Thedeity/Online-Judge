#include<iostream>
using namespace std ;

int main()
{
	int T,k=1 ;
	cin >> T ;
	while(T)
	{
		int m[2] , d[2] , y[2] ;
		char s ;
		
		for(int i=0 ; i<2 ; i++)
		cin >> d[i] >> s >> m[i] >> s >> y[i] ;
		
		cout << "Case #" << k << ": " ;
		
		
		
		if( (y[0]<y[1]) || ((y[0]==y[1])&&(m[0]<m[1])) || ((y[0]==y[1])&&(m[0]==m[1])&&(d[0]<d[1])) )
		cout << "Invalid birth date" << endl ;
		else
		{
			int age = y[0] - y[1] ;
			if( (m[0]<m[1]) || ((m[0]==m[1])&&(d[0]<d[1])) )
			age-- ;
			
			if(age>130)
			cout << "Check birth date" << endl ;
			else
			cout << age << endl ;
		}
		k++,T-- ;
	}
	
	return 0 ;
}
