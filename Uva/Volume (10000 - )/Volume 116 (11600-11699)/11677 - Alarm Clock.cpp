#include<iostream>
using namespace std ;

int main()
{
	int h1,m1,h2,m2 ;
	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		if( h1==0 && m1==0 && h2==0 && m2==0 )
		return 0 ;
		
		int hour = h2-h1 ;
		if(hour<=0)
		hour += 24 ;
		
		int amount = hour*60 + m2-m1 ;
		
		if(amount>=1440)
		amount -= 1440 ;
		
		cout << amount << endl ;
	}
}
