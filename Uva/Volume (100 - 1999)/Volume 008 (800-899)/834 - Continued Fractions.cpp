#include<iostream>
using namespace std ;

int main(){
	
	int a,b ;
	while(cin >> a >> b){
		
		int f[1000] = {0} , k=0 ;
		
		if(a%b==0)
			f[0] = a/b ;
		else
		for(int i=0 ; i>=0 ; i++){
			f[k++] = a/b ;
			a%=b ;
			swap(a,b) ;
			
			if(a%b==0 && b!=0){
				f[k] = a/b ;
				break ;
			}
		}
		
		cout << "[" << f[0] ;
		if(k!=0)
			cout << ";" ;
		for(int i=1 ; i<=k ; i++){
			cout << f[i] ;
			if(i!=k)
				cout << "," ;
		}
		cout << "]" << endl ;
	}
	
}
