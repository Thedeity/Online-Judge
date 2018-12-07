#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int N , M ;
	while(cin >> N)
	{
		int price[10000] = {0} ;
		
		for(int i=0 ; i<N ; i++)
		cin >> price[i] ;
		
		cin >> M ;
		
		sort(price,price+N) ;
		
		int index ;
		for(int i=0 ; i<N ; i++)
		{
			if(price[i]==price[i+1] && i!=N-1)
			continue ;
			else if(price[i]>=(M+1)/2)
			{
				index = i-1 ;
				break ;
			}
		}
		
		int one,two,fin=0 ;
		for(int i=index ; i>=0 ; i--)
		{
			for(int j=i+1 ; j<N ; j++)
			{
				//cout << price[i] << " + " << price[j] << " = " << price[i] + price[j] << endl ;
				
				if(price[i]+price[j]==M)
				{
					one = price[i] ;
					two = price[j] ;
					fin = 1 ;
					break ;
				}
				else if(price[i]+price[j]>M)
				break ;
			}
			
			if(fin==1)
			break ;
		}
		cout << "Peter should buy books whose prices are " << one << " and " << two << ".\n\n" ;
		
	}
}
