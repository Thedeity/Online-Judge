#include<iostream>
using namespace std ;

int main()
{
	int T ;
	cin >> T ;
	
	while(T--)
	{
		int n ;
		cin >> n ;
		
		int score[100000] ;
		for(int i=0 ; i<n ; i++)
		cin >> score[i] ;
		
		int amount = -151515 , smartest = score[0] ;
		for(int i=0 ; i<n-1 ; i++)
		{
			if(smartest - score[i+1] > amount)
			amount = smartest - score[i+1] ;
			
			if(score[i+1]>smartest)
			smartest = score[i+1] ;
		}
		
		cout << amount << endl ;
	}
}
