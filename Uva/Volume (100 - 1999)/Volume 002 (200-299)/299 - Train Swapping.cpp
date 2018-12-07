#include<iostream>
using namespace std ;

int main()
{
	int N ;
	cin >> N ;
	while(N)
	{
		int num , train[50] , S = 0 ;
		cin >> num ;
		
		for(int i=0 ; i<num ; i++)
		cin >> train[i] ;
		
		for(int i=0 ; i<num-1 ; i++)
			for(int j=0 ; j<num-1 ; j++)
			{
				if(train[j]>train[j+1])
				{
					int temp = train[j] ;
					train[j] = train[j+1] ;
					train[j+1] = temp ;
					S++ ;
				}
			}
		
		cout << "Optimal train swapping takes " << S << " swaps." << endl ;
		N-- ;
	}
}
