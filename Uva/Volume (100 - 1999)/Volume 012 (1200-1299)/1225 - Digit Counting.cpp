#include<iostream>
using namespace std ;

int main()
{
	int N ;
	cin >> N ;
	while(N--)
	{
		int num , count[10]= {0} ;
		cin >> num ;
		
		for(int i=1 ; i<=num ; i++)
		{
			int temp = i ;
			while(temp>=10)
			{
				count[temp%10] ++ ;
				temp /= 10 ;
			}
			count[temp] ++ ;
		}
		
		for(int i=0 ; i<10 ; i++)
		{
			cout << count[i] ;
			
			if(i!=9)
			cout << " " ;
		}
		
		cout << endl ;
	}
}
