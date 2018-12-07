#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std ;

int main(){
	int n ;
	int jolly ;
	
	while(cin >> n)
	{
		jolly = 1 ;
		int data[3000] ;
		int minus[3000] = {0} ;
		for(int i=0 ; i<n ; i++)
		{
			cin >> data[i] ;
		}
		
		for(int i=0 ; i<n-1 ; i++)
		{
			minus[i] = abs(data[i]-data[i+1]);
		}
		
		sort(minus,minus+n-1) ;
		
		for(int i=0 ; i<n-1 ; i++)
		{
			if(minus[i]!=i+1)
			jolly = 0 ;
		}
		
		if(jolly==1)
		cout << "Jolly" << endl ;
		else
		cout << "Not jolly" << endl ;
	}
}
