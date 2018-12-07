#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int T,k=1 ;
	cin >> T ;
	while(T)
	{
		int N ;
		cin >> N ;
		
		int num[10000] ;
		for(int i=0 ; i<N ; i++)
		cin >> num[i] ;
		
		sort(num,num+N) ;
		
		cout << "Case " << k << ": " << num[N-1] << endl ;
		k++,T-- ;
	}
	return 0 ;
}
