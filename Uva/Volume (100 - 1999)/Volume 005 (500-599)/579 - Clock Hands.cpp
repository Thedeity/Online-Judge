#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main(){
	int H , M ;
	char x ;
	while(cin >> H >> x >> M)
	{
		if( (H==0) && (M==0) )
		break ;
		
		double H_degree , M_degree ;
		H_degree = 30*(H%12) + M*0.5 ;
		M_degree = 6*M ;
		
		double temp = abs(H_degree - M_degree) ;
		
		if(temp>180)
		temp = 360 - temp ;
		
		cout << fixed << setprecision(3) << temp << endl ;
	}
}
