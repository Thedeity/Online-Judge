#include<iostream>
using namespace std;

int main(){
	int n ;
	cin >> n ;
	while(n)
	{
		int e,f,c,drink=0 ;
		cin >> e >> f >> c ;
		int bottle = e + f ;
		
		while( bottle/c != 0)
		{
			int temp = bottle / c ;
			drink += temp ;
			bottle %= c ;
			bottle += temp ;
		}
		
		cout << drink << endl ;
		
		n-- ;
	}
	return 0 ;
}
