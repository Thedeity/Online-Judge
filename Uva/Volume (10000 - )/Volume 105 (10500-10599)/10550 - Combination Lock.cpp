#include<iostream>
using namespace std ;

int main(){
	int a,b,c,d ;
	while(cin >> a >> b >> c >> d)
	{
		if( (a==0)&&(b==0)&&(c==0)&&(d==0) )
		break ;
		
		int one = b - a ;
		if(a>b)
		one = 40 - a + b ;
		
		int two = b - c ;
		if(c>b)
		two = 40 - c + b ;
		
		int three = d - c ;
		if(c>d)
		three = 40 - c + d ;
		
		cout << 2160-(one+two+three)*9 << endl ;
	}
	
	return 0 ;
}
