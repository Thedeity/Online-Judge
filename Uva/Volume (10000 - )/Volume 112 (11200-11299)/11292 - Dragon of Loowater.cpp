#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int n , m ;
	while(cin >> n >> m)
	{
		if(n==0 && m==0)
		return 0 ;
		
		int dragon_height[20000] , knight_height[20000] ;
		
		for(int i=0 ; i<n ; i++)
		cin >> dragon_height[i] ;
		
		for(int i=0 ; i<m ; i++)
		cin >> knight_height[i] ;
		
		sort(dragon_height,dragon_height+n) ;
		sort(knight_height,knight_height+m) ;
		
		int cost = 0 , kill = 0 ;
		
		if(dragon_height[n-1]<knight_height[m-1] || n<m )
		{
			for(int i=0,j=0 ; i<n ; j++)
			{
				if(j>=m)
				break ;
				if(knight_height[j]>=dragon_height[i])
				{
					cost += knight_height[j] ;
					i++ ;
					kill ++ ;
				}
			}
		}
		
		if(kill!=n)
		cout << "Loowater is doomed!" ;
		else
		cout << cost ;
		
		cout << endl ;
	}
}
