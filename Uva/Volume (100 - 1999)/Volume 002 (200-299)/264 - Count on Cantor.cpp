#include<iostream>
using namespace std ;

int main(){
	
	int can[4501] ; can[0] = 1 ;
	for(int i=1 ; i<4500 ; i++){
		can[i] = can[i-1] + i+1 ;
	}
	
	int n ;
	while(cin >> n){
		
		int level = 0 , amount ;
		int a=0,b=0 ;
		
		for(int i=0 ; i<4500 ; i++){
			
			if(can[i]<n && n<=can[i+1]){
				level = i+1 ;
				break ;
			}
				
		}
		
		amount = level + 2 ;
		
		if(level%2==0){
			for(int i=0 ; i<n-can[level-1] ; i++){
				b++ ;
			}
			a = amount - b ;
		}
			
		else{
			for(int i=0 ; i<n-can[level-1] ; i++){
				a++ ;
			}
			b = amount - a ;
		}
		
		if(n==1)
		cout << "TERM 1 IS 1/1" << endl ;
		else
		cout << "TERM " << n << " IS " << a << "/" << b << endl ;
	}
	
}
