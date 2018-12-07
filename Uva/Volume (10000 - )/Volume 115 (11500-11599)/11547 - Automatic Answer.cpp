#include<iostream>
using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	
	while(t)
	{
		int n ;
		cin >> n ;
		int ans = ( ( ((n*567/9)+7492 )*235/47 ) - 498 )%100 / 10 ;

		if(ans<0)
		ans *= -1 ;
		cout << ans << endl ;
		
		t-- ;
	}
	return 0 ;
}
