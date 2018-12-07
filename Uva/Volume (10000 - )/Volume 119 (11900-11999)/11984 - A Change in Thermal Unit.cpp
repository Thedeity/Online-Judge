#include<iostream>
#include<iomanip>
using namespace std ;

int main(){
	int T ;
	cin >> T ;
	int k = 1 ;
	
	while(T)
	{
		double c , d ;
		cin >> c >> d ;
		cout << "Case " << k << ": " << fixed << setprecision(2) << (((c*9/5)+32 + d )-32)*5/9 << endl ;
		k++,T-- ;
	}
}
