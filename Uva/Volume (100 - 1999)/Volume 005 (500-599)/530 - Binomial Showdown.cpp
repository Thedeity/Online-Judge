#include<iostream>
using namespace std ;

int main(){
	
	long long N , M ;
	while(cin >> N >> M){
		
		if(!N && !M)
		return 0 ;
		
		long long C = 1 ;
		
		if(M>N/2)  // N = 1000 , M = 997
			M = N - M ;
			
		for(int i=N-M+1 , j=M ; i<=N ; i++){
			C *= i ;
			while(C%j==0 && j!=1)
				C /= j-- ;
		}
		
		cout << C << endl ;
	}
	
}
