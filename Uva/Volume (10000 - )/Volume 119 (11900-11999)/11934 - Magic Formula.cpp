#include<iostream>
using namespace std ;

int Formula(int a , int b , int c , int d , int L){
	
	int num = 0 ;
	for(int i=0 ; i<=L ; i++)
		if((a*i*i+b*i+c)%d==0)
			num ++ ;
	
	return num ;
}
int main(){
	int a,b,c,d,L ;
	while(cin >> a >> b >> c >> d >> L){
		
		if(!a && !b && !c && !d && !L)
			return 0 ;
		
		cout << Formula(a,b,c,d,L) << endl ;
	}
}
