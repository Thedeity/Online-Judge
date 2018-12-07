#include<iostream>
#include<cstring>
using namespace std;

void failure(char str[] , int f[]){
	
	f[0] = -1 ;
	int len = strlen(str) ;
	
	for(int j=1 ; j<len ; j++){
		int i = f[j-1] ;
		while(*(str+j)!=*(str+i+1) && i>=0)	i = f[i] ;
		
		if(*(str+j)==*(str+i+1))
			f[j] = i+1 ;
		else
			f[j] = -1 ;
	}
	/*
	for(int i=0 ; i<strlen(str) ; i++)
		cout << f[i] << " " ;
	*/
}


bool KMP(char str1[] , char str2[]){
	int f[1001],i=0,j=0 ;
	failure(str2,f) ;

	int len1 = strlen(str1) ;
	int len2 = strlen(str2) ;
	
	if(len1 < len2)	return false ;
	
	while(i<len1 && j<len2){
		if(str1[i]!=str2[j]){
			if(j==0)
				i++ ; 
			else
				j = f[j-1] + 1 ;
		}
		else{
			i++ ;
			j++ ;
		}
	}
	
	if(j<len2)	return false ;
	else	return true ;
}


int main(){
	int k,q ;
	cin >> k ;
	char input[100001] , query[1001] ;
	
	while(k--){
		
		cin >> input >> q ;
		
		for(int i=0 ; i<q ; i++){
			cin >> query ;
			
			if ( KMP(input,query) )	cout << "y\n" ;
			else	cout << "n\n" ;
		}
	}
	return 0 ;
}
