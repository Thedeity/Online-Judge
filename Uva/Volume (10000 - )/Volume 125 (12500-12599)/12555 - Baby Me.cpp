#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int T,k=1 ;
	cin >> T ;
	cin.get() ;
	while(T--){
		char input[20] ;
		cin.getline(input,20) ;
		
		int a=0 , b=0 , index ;
		for(int i=0 ; i<strlen(input) ; i++){
			if('0'<=input[i] && input[i]<='9'){
				a *= 10 ;
				a += input[i] - '0' ;
			}
			if(!('0'<=input[i] && input[i]<='9')){
				index = i ;
				break ;
			}
		}
		for(int j=index ; j<strlen(input) ; j++){
			if('0'<=input[j] && input[j]<='9'){
				b *= 10 ;
				b += input[j] - '0' ;
			}
			if(input[j]=='ит')	break ;
		}
		
		double ans = (double)a*0.5+(double)b*0.05 ;
		cout << "Case " << k++ << ": " << ans << endl ;
	}
}
