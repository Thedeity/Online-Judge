#include<iostream>
#include<cmath>
using namespace std ;

int main(){
	int coefficient[9] ;
	while(cin>>coefficient[0]>>coefficient[1]>>coefficient[2]>>coefficient[3]>>coefficient[4]>>coefficient[5]>>coefficient[6]>>coefficient[7]>>coefficient[8]){
		
		int num=0 ;
		for(int i=0 ; i<8 ; i++){
			if(coefficient[i]!=0){
				if(num==0){
					if(coefficient[i]==1) cout << "x" ;
					else if(coefficient[i]==-1)	cout << "-x" ;
					else cout << coefficient[i] << "x" ;
					
					
					
					if(8-i!=1)	cout << "^" << 8-i ;
				}
				else{
					if(coefficient[i]>0){
						cout << " + " ;
						if(abs(coefficient[i])!=1)	cout << coefficient[i] ;
						cout << "x" ;
						if(8-i!=1)	cout << "^" << 8-i ;
					}
					else{
						cout << " - " ;
						if(abs(coefficient[i])!=1)	cout << -1*coefficient[i] ;
						cout << "x" ;
						if(8-i!=1)	cout << "^" << 8-i ;
					}
				}
				num++ ;
			}
		}
		if(num==0)	cout << coefficient[8] ;
		else if(coefficient[8]!=0) {
			if(coefficient[8]<0)	cout << " - " ;
			else	cout << " + " ;
			
			cout << abs(coefficient[8]) ;
		}
		cout << endl ;
	}
}

