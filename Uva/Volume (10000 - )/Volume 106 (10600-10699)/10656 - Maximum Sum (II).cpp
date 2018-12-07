#include<iostream>
using namespace std ;

int main()
{
	int N ;
	while(cin >> N)
	{
		if(N==0)
		return 0 ;
		
		int temp , k=0 ;
		for(int i=0 ; i<N ; i++)
		{
			cin >> temp ;
			
			if(temp!=0)
			{
				if(k!=0)
				cout << " " ;
				
				cout << temp ;
				k++ ;
			}
		}
		
		if(k==0)
		cout << "0" ;
		
		cout << endl ;
	}
}
