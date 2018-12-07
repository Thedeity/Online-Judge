#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	int k;
	cin >> k;
	while(k--){
		char input[100001] ;
		cin >> input ;
		
		int q ;
		cin >> q ;
		char query[1001] ;
		for(int i=0 ; i<q ; i++){
			cin >> query ;
			
			char *check ;
			check = strstr(input,query) ;
			if(check==NULL)	cout << "n\n" ;
			else cout << "y\n" ;
		}
	}
}
