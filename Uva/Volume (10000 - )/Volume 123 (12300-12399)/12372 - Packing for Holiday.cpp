#include<iostream>
using namespace std ;

int main()
{
	int T,k=1 ;
	cin >> T ;
	while(T)
	{
		int L,W,H ;
		cin >> L >> W >> H ;
		
		cout << "Case " << k << ": " ;
		
		if(L>20 || W>20 || H>20 )
		cout << "bad" << endl ;
		else
		cout << "good" << endl ;
		
		k++,T-- ;
	}
	return 0 ;
}
