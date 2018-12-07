#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n ;
	cin >> n ;
	cout << "Lumberjacks:" << endl ;
	
	while(n)
	{
		int order = 1 ;
		int M[10] ;
		for(int i=0 ; i<10 ; i++)
		cin >> M[i] ;
		
		if( M[0]<M[1] )
		{
			for(int i=1 ; i<9 ; i++)
			{
				if( M[i]>M[i+1] )
				{
					order = 0 ;
				}
			}
		}
		else
		{
			for(int i=1 ; i<9 ; i++)
			{
				if( M[i]<M[i+1] )
				{
					order = 0 ;
				}
			}
		}
		

		if(order==0)
		cout << "Unordered" << endl ;
		else
		cout << "Ordered" << endl ;
		
		
		n-- ;
	}
	return 0 ;
}
