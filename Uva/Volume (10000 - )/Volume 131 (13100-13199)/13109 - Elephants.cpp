#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int test ;
	cin >> test ;
	while(test)
	{
		int M,W ;
		cin >> M >> W ;
		
		int elephant[100000] = {0} ;
		for(int i=0 ; i<M ; i++)
		cin >> elephant[i] ;
		
		sort(elephant,elephant+M) ;
		
		int num = 0 , amount = 0 ;
		for(int i=0 ; i<M ; i++)
		{
			amount += elephant[i] ;
			if(amount<=W)
			num ++ ;
			else
			break ;
		}
		
		cout << num << endl ;
		
		test -- ;
	}
	return 0 ;
}
