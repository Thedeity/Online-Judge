#include<iostream>
using namespace std ;

int main()
{
	int n,k=1 ;
	cin >> n ;
	while(n)
	{
		if(k!=1)
		cout << endl ;
		
		int W , y1 , y2 ;
		cin >> W >> y1 >> y2 ;
		
		if(W==1)
		{
			cout << "yes" << endl ;
			k++ , n-- ;
			break ;
		}
		
		int temp = y1 - y2 ;
		int fit = 1 ;
		for(int i=1 ; i<W ; i++)
		{
			cin >> y1 >> y2 ;
			
			if(y1-y2!=temp)
			fit = 0 ;
		}
		
		
		if(fit==0)
		cout << "no" << endl ;
		else
		cout << "yes" << endl ;
		
		k++,n-- ;
	}
	return 0 ;
}
