#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n ;
	cin >> n;
	
	while(n)
	{
		int num ;
		cin >> num ;
		int cost[20000] ;
		
		for(int i=0 ; i<num ; i++)
		{
			cin >> cost[i] ;
		}
		
		sort(cost,cost+num) ;
		reverse(cost,cost+num) ;
		
		int save = 0 ;
		
		for(int i=2 ; i<num ; i=i+3)
		{
			save += cost[i] ;
		}
		
		cout << save << endl ;
 		n-- ;
	}
	
	return 0 ;
}
