#include<iostream>
using namespace std ;

int main(){
	int fibo[5001][1500] = {{0}} ;
	fibo[1][0] = 1 ;
	
	for(int i=2 ; i<5001 ; i++)
		for(int j=0 ; j<1500 ; j++){
			fibo[i][j] += (fibo[i-1][j] + fibo[i-2][j]) ;
			if(fibo[i][j]>=10){
				fibo[i][j+1] += fibo[i][j] / 10 ;
				fibo[i][j] %= 10 ;
			}
		}
		
	int n ;
	while(cin >> n){
		cout << "The Fibonacci number for " << n << " is " ;
		if(n!=0){
			for(int j=1499 ; j>=0 ; j--)
				if(fibo[n][j]!=0){
					for(int k=j ; k>=0 ; k--)
						cout << fibo[n][k] ;
					break ;
				}
		}
			
		else
			cout << "0" ;
		
		cout << endl ;
	}
}
