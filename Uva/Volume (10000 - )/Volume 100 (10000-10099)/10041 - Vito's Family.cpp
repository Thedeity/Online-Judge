#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	while(n)
	{
		int index , r , s[30000] , distance = 0 ;
		cin >> r ;
		
		for(int i=0 ; i<r ; i++)
		cin >> s[i] ;
		
		sort(s,s+r) ;
		
		if(r%2==0)
		index = r/2 - 1 ;
		else
		index = r/2 ;
		
		for(int i=0 ; i<r ; i++)
		distance += abs(s[i]-s[index]);
		
		cout << distance << endl ;
		n -- ;
	}
}
