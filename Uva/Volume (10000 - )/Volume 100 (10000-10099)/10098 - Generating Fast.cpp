#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std ;

int level(int n){
	
	for(int i=n-1 ; i>=2 ; i--)
		n *= i ;
		
	return n ;
}

int amount(char s[],int len){
	
	int num = level(len) , CharAt[52] = {0} ; // 0~25 : a~z , 26~51 : A~Z
	
	for(int i=0 ; i<len ; i++){
		if('a'<=s[i] && s[i]<='z')
			CharAt[s[i]-97] ++ ;
		else if('A'<=s[i] && s[i]<='Z')
			CharAt[s[i]-39] ++ ;
	}
	
	for(int i=0 ; i<52 ; i++)
		if(CharAt[i]>=2)
			num /= level(CharAt[i]) ;
			
	return num ;
}

int main(){
	
	int n ;
	cin >> n ;

	for(int i=0 ; i<n ; i++){
		
		char s[11] ;
		cin >> s ;
		
		int len = strlen(s) ;
		int num = amount(s,len) ;
		
		for(int x=0 ; x<len ; x++)
			for(int y=0 ; y<len-1 ; y++){
				if(s[y]>s[y+1]){
					char temp = s[y+1] ;
					s[y+1] = s[y] ;
					s[y] = temp ;
				}
			}
		
		for(int j=0 ; j<num ; j++){
			for(int k=0 ; k<len ; k++){
				cout << s[k] ;
			}
			cout << endl ;
			next_permutation(s,s+len) ;
		}
		cout << endl ;
	}
	
}
