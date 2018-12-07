#include<iostream>
using namespace std ;

int main(){
	
	int t , a , b , temp ;
	cin >> t ;
	
	while(t--){
		
		cin >> a >> b ;
		temp = a-b ;
		if(temp<0)
		cout << "<\n" ;
		else if(temp==0)
		cout << "=\n" ;
		else
		cout << ">\n" ;
	}
}
