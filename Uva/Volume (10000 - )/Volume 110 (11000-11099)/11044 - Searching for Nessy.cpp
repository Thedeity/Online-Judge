#include<iostream>
using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	
	while(t)
	{
		int n,m ;
		cin >> n >> m ;
		
		if((n-2)%3!=0)
		n = (n-2)/3 + 1 ;
		else
		n = (n-2)/3 ;
		
		if((m-2)%3!=0)
		m = (m-2)/3 + 1 ;
		else
		m = (m-2)/3 ;
		
		cout << n*m << endl ;
		
		t-- ;
	}
	return 0 ;
}
