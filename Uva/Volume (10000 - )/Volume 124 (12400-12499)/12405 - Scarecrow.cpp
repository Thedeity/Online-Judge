#include<iostream>
using namespace std ;

int main()
{
	int T,len,k=1 ;
	cin >> T ;
	
	while(T)
	{
		char field[10000] ;
		
		cin >> len >> field ;
		
		int num = 0 ;
		for(int i=0 ; i<len ; )
		{
			if(field[i]=='.')
			{
				num ++ ;
				i += 3 ;
			}
			else
			i++ ;
		}
		
		cout << "Case " << k << ": " << num << endl ;
		k++,T-- ;
	}
	return 0 ;
}
