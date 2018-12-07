#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

int main(){
	
	int n ;
	cin >> n ;
	while(n--){
		
		int sum[201]={0} ;
		char a[201] , b[201] ;
		cin >> a >> b ;
		
		int len_a = strlen(a) , len_b = strlen(b) ;
		int m = max(len_a,len_b) ;
		
		for(int i=0 ; i<m ; i++){
			
			sum[i] += (i<=len_a && a[i]!='\0')?(a[i]-'0'):(0) ;
			sum[i] += (i<=len_b && b[i]!='\0')?(b[i]-'0'):(0) ;
			
			if(sum[i]>=10){
				sum[i] -= 10 ;
				sum[i+1] ++ ;
			}
		}
		
		if(sum[m]!=0)
			m+=1 ;
		
		int front = 0 ;
		for(int i=0 ; i<m ; i++)
			if(sum[i]!=0){
				front = i ;
				break ;
			}
			
		for(int i=front ; i<m ; i++)
			cout << sum[i] ;
			
		cout << endl ;
	}
	return 0 ;
}
