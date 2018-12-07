#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int N,k=1 ;
	while(cin >> N)
	{
		if(N<0)
		return 0 ;
		
		int num = 0 ;
		
		while( pow(2,num)<N )
		num ++ ;
		
		cout << "Case " << k << ": " << num << endl ;
		k++ ;
	}
}
