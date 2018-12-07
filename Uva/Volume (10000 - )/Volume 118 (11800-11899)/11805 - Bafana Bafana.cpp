#include<iostream>
using namespace std ;

int main()
{
	int T,k=1 ;
	cin >> T ;
	for(int i=0 ; i<T ; i++)
	{
		int N,K,P ;
		cin >> N >> K >> P ;
		int temp = (K+P)%N==0 ? N : (K+P)%N ;
		
		cout << "Case " << k << ": " << temp << endl ;
		k++ ;
	}
	
	return 0 ;
}
