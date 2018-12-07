#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n ;
	while(n)
	{
		int num ;
		cin >> num ;
		
		int position[20] = {0} ;
		
		for(int i=0 ; i<num ; i++)
		cin >> position[i] ;
		
		sort(position,position+num) ;
		
		cout << ( position[num-1] - position[0] ) * 2 << endl ;
		
		n-- ;
	}
	return 0 ;
}
