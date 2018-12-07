#include<iostream>
using namespace std ;
//10:35
int main(){
	int n ;
	while(cin >> n){
		if(!n)
			return 0 ;
		int num[10007] = {0} ;
		// formula : (2n n)*n!/n+1  === (2n)!/n!(n+1) === 2n~n+2
		
		for(int i=n+2,j=0 ; i>0 ; i/=10)
			num[j++] = i%10 ;
			
		for(int a=n+3 ; a<=2*n ; a++){
			
			for(int i=0 ; i<10000 ; i++)
				num[i] *= a ;
				
			for(int i=0 ; i<10000 ; i++)
				if(num[i]>=10){
					num[i+1] += num[i] / 10 ;
					num[i] %= 10 ;
				}
		}
		
		if(n==1)
			cout << "1" ;
		else{
			for(int i=10006 ; i>=0 ; i--)
				if(num[i]!=0){
					for(int j=i ; j>=0 ; j--)
						cout << num[j] ;
					break ;
				}
		}
		
			
		cout << endl ;
	}
}
