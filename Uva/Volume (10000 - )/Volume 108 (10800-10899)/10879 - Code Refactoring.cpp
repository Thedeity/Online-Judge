#include<iostream>
using namespace std ;

int main(){
	int n[4],N,K,cases=1 ;
	cin >> N ;
	
	while(N--){
		cin >> K ;
		cout << "Case #" << cases++ << ": " << K ;
		
		int num = 0 ;
		for(int i=2 ; i<K ; i++){
			if(K%i==0 && num==0){
				n[0] = i ;
				n[1] = K/i ;
				num = 1 ;
			}
			else if(K%i==0){
				n[2] = i ;
				n[3] = K/i ;
				num = 0 ;
				break ;
			}
		}
		cout << " = " << n[0] << " * " << n[1] << " = " << n[2] << " * " << n[3] << endl ;
	}
	return 0 ;
}
