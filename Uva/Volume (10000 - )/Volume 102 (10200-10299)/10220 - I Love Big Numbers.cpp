#include<iostream>
using namespace std ;

int main(){
	int n ;
	while(cin >> n){
		int num[30002] = {0} ;
		num[0] = 1 ;
		
		for(int i=2 ; i<=n ; i++){
			for(int j=0 ; j<30000 ; j++)
				num[j] *= i ;
				
			for(int k=0 ; k<30000 ; k++)
				if(num[k]>=10){
					num[k+1] += (num[k] / 10) ;
					num[k] %= 10 ;
				}
		}
		
		int sum=0 ;
		for(int i=0 ; i<30000 ; i++)
			sum += num[i] ;
		cout << sum << endl ;
	}
}
