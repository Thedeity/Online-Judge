#include<iostream>
using namespace std ;

int main(){
	int N ;
	cin >> N ;
	
	int fib[38] ;
	fib[0] = 1 ; fib[1] = 2 ;
	
	for(int i=2 ; i<38 ; i++)
		fib[i] = fib[i-1] + fib[i-2] ;
		
	while(N--){
		int num ;
		cin >> num ;
		cout << num << " = " ;
		
		bool begin = false ;
		for(int i=37 ; i>=0 ; i--){
			if(num>=fib[i])	begin = true ;
			
			if(begin){
				if(num>=fib[i]){
				num -= fib[i] ;
				cout << "1" ;
			}
			else	cout << "0" ;
			}
		}
			
		
		cout << " (fib)" << endl ;
	}
}
