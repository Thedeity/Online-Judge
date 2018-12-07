#include<iostream>
using namespace std;

int main(){
	int n,k=1 ;
	cin >> n ;
	
	while(n)
	{
		int num ;
		cin >> num ;
		
		int wall[50] ;
		
		for(int i=0 ; i<num ; i++)
		{
			cin >> wall[i] ;
		}
		
		int high = 0 , low = 0 ;
		
		for(int i=0 ; i<num-1 ; i++)
		{
			if(wall[i+1]-wall[i]>0)
			high ++ ;
			else if(wall[i+1]-wall[i]<0)
			low ++ ;
		}
		
		cout << "Case " << k << ": " << high << " " << low << endl ;
		
		k++,n-- ;
	}
}
