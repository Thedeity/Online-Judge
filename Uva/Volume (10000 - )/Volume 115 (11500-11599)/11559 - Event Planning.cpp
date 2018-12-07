#include<iostream>
using namespace std ;

int main()
{
	int N,B,H,W ;
	while(cin >> N >> B >> H >> W)
	{
		int price[18] = {0} , beds[13] = {0} , cost = 2147483647 ;
		for(int i=0 ; i<H ; i++)
		{
			cin >> price[i] ;
			for(int j=0 ; j<W ; j++)
			{
				cin >> beds[j] ;
				if(beds[j]>=N)
					if( N*price[i]<=B && N*price[i]<cost )
					cost = N*price[i] ;
			}
		}
		
		if(cost<=B)
		cout << cost ;
		else
		cout << "stay home" ;
		
		cout << endl ;
	}
}
