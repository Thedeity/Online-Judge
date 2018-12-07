#include<iostream>
using namespace std ;

int num(long long int number){
	if(number==1)
		return 3 ;
		
	int amount = 0 ;
	
	while(number!=1){
		if(number%2==0)
			number /= 2 ;
		else
			number = 3*number + 1 ;
		amount ++ ;
	}
	return amount ;
}

int main(){
	long long L,H ;
	while(cin >> L >> H){
		
		if(!L && !H)
			return 0 ;
		
		if(L>H)
			swap(L,H) ;
		long long int max = 0 , key = 0 ;
		for(int i=L ; i<=H ; i++){
			long long int temp = num(i) ;
			if(max<temp){
				max = temp ;
				key = i ;
			}
		}
		
		cout << "Between " << L << " and " << H << ", " << key << " generates the longest sequence of " << max << " values." << endl ;
	}
}
