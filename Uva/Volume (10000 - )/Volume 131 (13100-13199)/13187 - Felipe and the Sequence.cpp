#include<iostream>
using namespace std;

int main(){
	int t ;
	cin >> t ;
	
	while(t)
	{
		long long int s ;
		cin >> s ;
		cout << (s+1)*(s+1) - 1 << endl ;
		
		t-- ;
	}
	
	return 0 ;
}
