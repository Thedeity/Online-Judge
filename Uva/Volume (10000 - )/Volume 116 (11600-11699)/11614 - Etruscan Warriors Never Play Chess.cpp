#include<iostream>
#include<cmath>
using namespace std ;

int main(){
	
	int case_num ;
	long long num ;
	cin >> case_num ;
	
	while(case_num--){
		cin >> num ;
		long long sol = (-1+sqrt(1+8*num))/2 ;
		cout << sol << endl ;
	}
}
