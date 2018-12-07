#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int R , n ;
	while(cin >> R >> n)
	{
		int list[10001]={0} , dead = 0 ;
		
		int temp ;
		
		for(int i=0 ; i<n ; i++)
		{
			cin >> temp ;
			list[temp-1] = 1 ;
		}
		
		for(int i=0 ; i<R ; i++)
		{
			if(!list[i])
			{
				cout << i+1 << " " ;
				dead = 1 ;
			}
		}
		
		if(dead==0)
		cout << "*" ;
		
		cout << endl ;
	}
}
