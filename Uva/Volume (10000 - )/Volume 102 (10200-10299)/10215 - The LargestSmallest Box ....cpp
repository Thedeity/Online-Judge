#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;

int main(){
	double L,W ;
	while(cin >> L >> W){
		double max = ((L+W)-sqrt(L*L+W*W-L*W))/6 ;
		cout << fixed << setprecision(3) << max << " 0.000 " << min((L+0.0001)/2,(W+0.0001)/2) << endl ;
	}
}
