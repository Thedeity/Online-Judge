#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int a,b ;
	while(cin >> a >> b)
	{
		if( (a==-1)&&(b==-1) )
		break ;
		
		int temp = abs(a-b) ;
		if( temp>50 )
		cout << 100 - temp << endl ;
		else
		cout << temp << endl ;
	}
	return 0 ;
}
