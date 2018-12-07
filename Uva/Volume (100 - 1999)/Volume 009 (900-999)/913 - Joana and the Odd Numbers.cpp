#include<iostream>
using namespace std ;

int main(){
	long long int n ;
	while(cin >> n)
	{
		long long int num = (n+1)*(n+1) / 4 ;
		long long int amount = 6*num-9 ;
		cout << amount << endl ;
	}
	
	return 0 ;
}
