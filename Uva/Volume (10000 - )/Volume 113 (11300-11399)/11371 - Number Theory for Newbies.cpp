#include<iostream>
using namespace std ;

int main(){
	long long input ;
	while(cin >> input){
		long long temp = input ;
		int n=0,number[10]={0} ;
		int first[10]={0},second[10]={0} ;
		
		while(temp>0){
			number[n++] = temp % 10 ;
			temp /= 10 ;
		}
		
		for(int i=0 ; i<10 ; i++){
			first[i] = number[i] ;
			second[i] = number[i] ;
		}
		
		for(int i=0 ; i<n+1 ; i++)
			for(int j=0 ; j<n-1 ; j++)
				if(first[j]<first[j+1])	swap(first[j],first[j+1]) ;
				
		for(int i=0 ; i<n+1 ; i++)
			for(int j=0 ; j<n-1 ; j++)
				if(second[j]>second[j+1])	swap(second[j],second[j+1]) ;
		
		int index = 0 ;
		for(int i=0 ; i<n-1 ; i++){
			if(second[i]!=0)	break ;
			index ++ ;
		}
		for(index ; index>0 ; index--)
			swap(second[index],second[index-1]) ;
		
		long long a = 0 ;
		long long b = 0 ;
		
		for(int i=0 ; i<n ; i++){
			a *= 10 ;
			a += first[i] ;
		}
		
		for(int i=0 ; i<n ; i++){
			b *= 10 ;
			b += second[i] ;
		}
		if(a<b)	swap(a,b) ;
		
		cout << a << " - " << b << " = " << a-b << " = 9 * " << (a-b)/9 << endl ;
	}
}
