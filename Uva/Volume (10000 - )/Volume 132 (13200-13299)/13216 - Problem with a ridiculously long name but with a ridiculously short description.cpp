#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		char n[1002] ;
		cin >> n ;
		
		if(strcmp(n,"0")==0)
		cout << "1" ;
		else if(strcmp(n,"1")==0)
		cout << "66" ;
		else{
			int len = strlen(n) ;
			char last = n[len-1] ;
			
			switch(last){
				case '2' : case '7' :
					cout << "56" ;	break ;
				case '3' : case '8' :
					cout << "96" ;	break ;
				case '4' : case '9' :
					cout << "36" ;	break ;
				case '5' : case '0' :
					cout << "76" ;	break ;
				case '6' : case '1' :
					cout << "16" ;	break ;
			}
		}
		
		cout << endl ;
	}
	return 0 ;
}
