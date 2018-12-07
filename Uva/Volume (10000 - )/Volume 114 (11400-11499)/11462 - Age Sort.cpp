#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		if(n==0)
		return 0 ;
		
		int people[2000000] ;
		
		for(int i=0 ; i<n ; i++)
		cin >> people[i] ;
		
		sort(people,people+n) ;
		
		for(int i=0 ; i<n ; i++)
		{
			if(i!=0)
			cout << " " ;
			
			cout << people[i] ;
		}
		
		cout << endl ;
	}
}
