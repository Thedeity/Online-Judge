#include<iostream>
using namespace std ;

int GCD(int i,int j)
{
	int temp ;
	if(i<j)
	{
		temp = j ;
		j = i ;
		i = temp ;
	}
	
	while(i%j!=0)
	{
		temp = i % j ;
		i = j ;
		j = temp ;
	}
	
	return j ;
}

int main()
{
	int N ;
	while(cin >> N)
	{
		if(N==0)
		return 0 ;
		
		int G = 0 ;
		for(int i=1 ; i<N ; i++)
		for(int j=i+1 ; j<=N ; j++)
		{
   	 		G += GCD(i,j) ;
		}
		
		cout << G << endl ;
	}
}
