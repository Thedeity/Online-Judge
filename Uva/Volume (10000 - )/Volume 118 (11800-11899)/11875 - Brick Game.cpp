#include<iostream>
using namespace std;

int main(){
	int n , k=1 ;
	cin >> n ;
	
	while(n)
	{
		int num ;
		cin >> num ;
		
		int T[100] ;
		for(int i=0 ; i<num ; i++)
		{
			cin >> T[i] ;
		}
		
		cout << "Case " << k << ": " << T[num/2] << endl ;
		
		k++,n-- ;
	}
}
