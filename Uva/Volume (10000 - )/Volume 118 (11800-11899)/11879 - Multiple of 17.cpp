#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	char num[101] ;
	while(cin >> num){
		if(strcmp(num,"0")==0)
			return 0 ;
			
		int digit = 0 ;
		for(int i=0 ; i<strlen(num) ; i++){
			digit *= 10 ;
			digit += (num[i]-'0') ;
			if(digit>=17)
				digit %= 17 ;
		}
		if(digit==0) cout << 1 ;
		else cout << 0 ;
		cout << endl ;
	}
}
