#include<iostream>
#include<cmath>
using namespace std ;

bool Istwo(int n){
	while(n%2==0)
		n/= 2 ;
	
	if(n==1)
		return true ;
	else
		return false ;
}
int main(){
	
	int n ;
	while(cin >> n){
		if(n==-1)
			return 0 ;
		
		if(Istwo(n)==true){
			cout << n << " = " << n << " + ... + " << n << endl ;
		}
		else{
			
			int f[10000]={0} , temp=2*n ,k=0 , max ;
			for(int i=2 ; i<sqrt(temp) ; i++){
				if(temp%i==0)
					f[k++] = i ;
					
			}
			
			max = f[--k] ;
			while(max%2==0 && (temp/max)%2==0)
				max = f[--k] ;
			
			int amount = temp / max ;  // if n = 35 , temp = 70 , max = 7 , amount = 10
			
			int x = (amount-max+1)/2 ;
			cout << n << " = " << x << " + ... + " << x+max-1 << endl ;
		}
	}
}
