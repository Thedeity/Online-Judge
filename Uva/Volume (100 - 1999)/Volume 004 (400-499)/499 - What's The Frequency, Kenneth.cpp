#include<iostream>
using namespace std ;

int main(){
	
	string input ;
	while(getline(cin,input)){
		
		int f[52] = {0} ;
		for(int i=0 ; i<input.length() ; i++){
			
			if('A'<=input[i] && input[i]<='Z')
				f[input[i]-65] ++ ;
			else if('a' <=input[i] && input[i]<='z')
				f[input[i]-71] ++ ;
		}
		
		int max = -1 ;
		
		for(int i=0 ; i<52 ; i++)
			if(f[i]>max)
				max = f[i] ;		
		for(int i=0 ; i<52 ; i++)
			if(max==f[i]){
				char temp = (i<=25)?char(i+65):char(i+71) ;
				cout << temp ;
			}
				
		cout << " " << max << endl ;
	}
	
}
