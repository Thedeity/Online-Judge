#include<iostream>
using namespace std;

int main(){
	int k ;
	while(cin >> k)
	{
		if(k==0)
		break ;
		
		int n , m ;
		int point[1000][2] ;
		cin >> n >> m ;
		
		for(int i=0 ; i<k ; i++)
		{
			cin >> point[i][0] >> point[i][1] ;
			
			if( ( n<point[i][0] ) && ( m<point[i][1] ) )
			cout << "NE" << endl ;
			
			else if( ( n<point[i][0] ) && ( m>point[i][1] ) )
			cout << "SE" << endl ;
			
			else if( ( n>point[i][0] ) && ( m>point[i][1] ) )
			cout << "SO" << endl ;
			
			else if( ( n>point[i][0] ) && ( m<point[i][1] ) )
			cout << "NO" << endl ;
			
			else
			cout << "divisa" << endl ;
		}
	}
	
	return 0 ;
}
