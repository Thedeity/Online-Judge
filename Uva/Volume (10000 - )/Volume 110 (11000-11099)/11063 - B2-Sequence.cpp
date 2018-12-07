#include<iostream>
using namespace std ;


int main()
{
	int N,k=1 ;
	while(cin >> N)
	{
		int num[10000],sum[1000000]={0} ;
		bool b2 = true ;
		for(int i=0 ; i<N ; i++)
		{
			cin >> num[i] ;
			
			if(num[i]<1 || (i&&num[i]<num[i-1]))
			b2 = false ;
		}
		
		for(int i=0 ; i<N ; i++)
			for(int j=i ; j<N ; j++)
			{
				int temp = num[i]+num[j] ;
				sum[temp] ++ ;
				
				if(sum[temp]>1)
				{
					b2 = false ;
					break ;
				}
			}
		
		cout << "Case #" << k++ ;
		if(b2)
		cout << ": It is a B2-Sequence.\n\n" ;
		else
		cout << ": It is not a B2-Sequence.\n\n" ;
	}
	
	return 0 ;
}
