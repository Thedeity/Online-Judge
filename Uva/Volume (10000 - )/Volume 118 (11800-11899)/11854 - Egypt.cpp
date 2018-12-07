#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
	
	int line[3] ;
	while(cin >> line[0] >> line[1] >> line[2]){
		
		if(line[0]+line[1]+line[2]==0)
			return 0 ;
			
		sort(line,line+3) ;
		
		if(line[0]*line[0]+line[1]*line[1]==line[2]*line[2])
			cout << "right\n" ;
		else
			cout << "wrong\n" ;
	}
}
