#include<iostream>
using namespace std ;

int main(){
	long long int t ;
	cin >> t ;
	while(t--){
		long long int s ;
		cin >> s ;
		cout << int(s/2)*(s-1) + s << endl ;
	}
}
