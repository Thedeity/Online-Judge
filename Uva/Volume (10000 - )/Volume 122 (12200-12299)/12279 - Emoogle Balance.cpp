#include<iostream>
using namespace std ;

int main()
{
	int N,k=1 ;
	
	while(cin >> N)
	{
		if(N==0)
		return 0 ;
		
		int record[2] = {0} ;
		
		for(int i=0,j ; i<N ; i++)
		{
			cin >> j ;
			if(j!=0)
			record[0] ++ ;
			else
			record[1] ++ ;
		}
		
		cout << "Case " << k << ": " << record[0] - record[1] << endl ;
		k++ ;
	}
	
}
