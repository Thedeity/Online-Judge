#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int T,k=1 ;
	cin >> T ;
	cin.get() ;
	while(T--){
		char input[101] ;
		cin.getline(input,101) ;
		
		int num=0 ;
		for(int i=0 ; i<strlen(input) ; i++){
			switch(input[i]){
				case 'a' :case 'd' :case 'g' :case 'j' :case 'm' :case 'p' :case 't' :case 'w' :case ' ' :
					num ++ ;	break ;
				case 'b' :case 'e' :case 'h' :case 'k' :case 'n' :case 'q' :case 'u' :case 'x' :
					num +=2 ;	break ;
				case 'c' :case 'f' :case 'i' :case 'l' :case 'o' :case 'r' :case 'v' :case 'y' :
					num += 3 ;	break ;
				case 's':case'z':
					num += 4 ; break ;
			}
		}
		cout << "Case #" << k++ << ": " << num << endl ;
	}
}
