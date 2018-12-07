#include<iostream>
using namespace std ;

int main()
{
	int N , number[1000] ;
	while(cin >> N)
	{
		int operations = 0 ;
		
		for(int i=0 ; i<N ; i++)
		cin >> number[i] ;
		
		for(int i=0 ; i<N-1 ; i++)
			for(int j=0 ; j<N-1 ; j++)
			{
				if(number[j]>number[j+1])
				{
					int temp = number[j] ;
					number[j] = number[j+1] ;
					number[j+1] = temp ;
					operations ++ ;
				}
			}
				
		cout << "Minimum exchange operations : " << operations << endl ;
	}
	return 0 ;
}
