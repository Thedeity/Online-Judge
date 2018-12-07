#include<iostream>
#include<iomanip>
using namespace std ;

bool fun(int num){
	for(int i=2 ; i*i<=num ; i++)
		if(num%i==0) return false ;
    return true ;
}

int main(){
	int a,b ;
	bool NumOfPrime[10001] ;
	for(int i=0 ; i<40 ; i++)
		NumOfPrime[i] = true ;
	for(int i=41 ; i<10001 ; i++)
		if(fun(i*i+i+41)==true) NumOfPrime[i] = true ;
		else NumOfPrime[i] = false ;
	
	while(cin >> a >> b){
		float p=0 , np=0 ;
		
		for(int i=a ; i<=b ; i++)
			if(NumOfPrime[i]==true) p ++ ;
			else np ++ ;
		
		cout << fixed << setprecision(2) << (100*p/(p+np))+0.00001 << endl ;
	}
	
	return 0 ;
}
