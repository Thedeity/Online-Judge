#include<iostream>
using namespace std ;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int n ;
		cin >> n ;
		if((n-1)%3==0)	cout << "NO" ;
		else cout << "YES" ;
		
		cout << endl ;
	}
	return 0 ;
}
