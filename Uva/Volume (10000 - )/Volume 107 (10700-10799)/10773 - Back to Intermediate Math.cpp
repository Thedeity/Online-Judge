#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main(){
	
	int n,k=1 ;
	cin >> n ;
	
	while(n--){
		double d,v,u ;
		cin >> d >> v >> u ;
		
		cout << "Case " << k++ << ": " ;
		
		if(u<=v || v==0)
			cout << "can't determine\n" ;
		else{
			double shortest_path = d / sqrt(u*u-v*v) ;
			double shortest_time = d/u ;
			cout << fixed << setprecision(3) << shortest_path - shortest_time << endl ;
		}
	}
		return 0 ;
}
