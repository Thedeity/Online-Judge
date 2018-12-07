#include<iostream>
using namespace std ;

int main(){
	int T , num ;
	int guess[5] ;
	while(cin >> T){
		num = 0 ;
		for(int i=0 ; i<5 ; i++){
			cin >> guess[i] ;
			if(T==guess[i])
				num ++ ;
		}
		cout << num << endl ;
	}
}
