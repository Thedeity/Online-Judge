#include<iostream>
using namespace std ;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int Cacho[5] ;
		bool sacle = true ;
		for(int i=0 ; i<5 ; i++)
			cin >> Cacho[i] ;
		
		for(int i=0 ; i<4 ; i++)
			if(Cacho[i]+1 != Cacho[i+1]){
				sacle = false ;
				break ;
			}
		
		if(sacle)	cout << "Y\n" ;
		else	cout << "N\n" ;
	}
}
