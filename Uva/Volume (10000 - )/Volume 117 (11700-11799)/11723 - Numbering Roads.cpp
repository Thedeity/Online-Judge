#include<iostream>
using namespace std ;

int main(){
	
	int R,N,k=1 ;
	while(cin >> R >> N){
		if(!R && !N)
			return 0 ;
			
		int num = (R-N)/N ;
		
		if(R<N)
			num = 0 ;
		else if(R%N!=0)
			num ++ ;
		cout << "Case " << k++ << ": " ;
		if(num>=27)
			cout << "impossible" ;
		else
			cout << num ;
		cout << endl ;
	}
	
}
