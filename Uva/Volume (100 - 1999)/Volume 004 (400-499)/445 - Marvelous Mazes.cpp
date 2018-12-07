#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	
	int k=0 ;
	string input ;
	while(getline(cin,input)){
		
		int num = 0 ;
		for(int i=0 ; i<input.length() ; i++){
			if('0'<=input[i] && input[i]<='9')
				num += input[i] - '0' ;
			else if(input[i]=='b'){
				for(int j=0 ; j<num ; j++)
					cout << " " ;
				num = 0 ;
			}
			else if(input[i]=='!' || input[i]=='\0')
				cout << endl ;
			else{
				for(int j=0 ; j<num ; j++)
					cout << input[i] ;
				num = 0 ;
			}
		}
		cout << endl ;
	}
	
}
