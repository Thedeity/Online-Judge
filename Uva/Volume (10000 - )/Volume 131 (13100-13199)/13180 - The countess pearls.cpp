#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
	int perals[1001] ;
	while(true){
	
		int j=0 ;
		for(int i=0 ;; i++,j++){
			cin >> perals[i] ;
			if(perals[0]==0)	return 0 ;
			if(perals[i]==0)	break ;
		}
		if(j%2==0)	cout <<"NO" ;
		else{
			bool sol = true ;
			sort(perals,perals+j) ;
			
			for(int i=0 ; i<j ; i++){
				if(perals[i]!=perals[i+1] && i!=j-1)	sol = false ;
				i++ ;
			}
			if(sol){
				for(int i=0 ; i<j ; i+=2){
					cout << perals[i] ;
					if(j!=1)	cout << " " ;
				}
				for(int i=j-2 ; i>=0 ; i-=2){
					if(i!=j-2)	cout << " " ;
					cout << perals[i] ;
				}
			}
			else	cout << "NO" ;
		}
		cout << endl ;
	}
}
