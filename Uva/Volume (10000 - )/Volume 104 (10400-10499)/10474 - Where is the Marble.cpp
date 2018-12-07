#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int N , Q , k=1 ;
	while(cin >> N >> Q)
	{
		if(N==0 || Q==0)
		return 0 ;
		
		int marbles[10000] ;
		for(int i=0 ; i<N ; i++)
		cin >> marbles[i] ;
		
		sort(marbles,marbles+N) ;
		
		
		
		cout << "CASE# " << k++ << ":" << endl ;
		
		for(int i=0 ; i<Q ; i++)
		{
			int object ;
			cin >> object ;
			
			for(int j=0 ; j<N ; j++)
			{
				if(object==marbles[j])
				{
					cout << object << " found at " << j+1 << endl ;
					break ;
				}
				else if(object<marbles[j] || object>marbles[N-1])
				{
					cout << object << " not found" << endl ;
					break ;
				}
			}
		}
	}
}
