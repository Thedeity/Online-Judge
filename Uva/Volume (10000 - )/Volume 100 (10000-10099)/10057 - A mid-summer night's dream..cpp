#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		int num[1000000] ;
		long long sum ;
		
		for(int i=0 ; i<n ; i++)
		{
			cin >> num[i] ;
			sum += num[i] ;
		}
		
		sort(num,num+n) ;
		
		int minimum_A = num[(n-1)/2] , suitable_count = 0 , possible_A , maximum_A = minimum_A ;
		if(n%2==0)
		{
			possible_A = (num[n/2] - num[n/2-1] + 1) ;
			maximum_A = num[n/2] ;
		}
		else
		possible_A = 1 ;
		
		for(int i=0 ; i<n ; i++)
			if(minimum_A <= num[i] && num[i] <= maximum_A)
			suitable_count ++ ;
			
		cout << minimum_A << " " << suitable_count << " " << possible_A << "\n" ;
	}
	
	
	
}
