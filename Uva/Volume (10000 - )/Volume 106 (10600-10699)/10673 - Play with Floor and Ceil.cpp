#include<iostream>
using namespace std ;

int main(){
	int T ;
	cin >> T ;
	long long x,k,a,b,p,q ;
	while(T--){
		cin >> x >> k ;
		
		if(x%k==0){
			p = 0 ;
			q = k ;
		}
		else{
			a = x/k ;
			if(x%k!=0) b = (x/k)+1 ;
			else b = a ;
			
			for(p=0 ; p*a<=x ; p++){
				if((x-p*a)%b==0){
					q = (x-p*a)/b ;
					break ;
				}
			}
		}
		
		cout << p << " " << q << endl ;
	}
}
