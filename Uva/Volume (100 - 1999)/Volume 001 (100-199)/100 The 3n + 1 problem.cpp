#include<iostream>
using namespace std;

int main()
{
	int one,two ;
	int a,b ;
	
	while(cin >> one >> two)
	{
		cout << one << " " << two << " " ;
		 
		if( one > two)
		{
			b = one ;
			one = two ;
			two = b ;
		}
		
		a = one ;
		
		int highest_length = 0 ;
		int temp ;	
		
		for(int i=one ; i<=two ; i++)
		{
			temp = 1 ;
			a = i ;
			
			while(a!=1)
			{
				if(a%2==1)
				{
					a = 3*a+1 ;
					temp++ ;
				}
				else
				{
					a /= 2 ;
					temp++;
				}
			}
			if( temp >= highest_length )
			{
				highest_length = temp ;
			}
		}
		
		cout << highest_length << endl ;
		
		if(cin.eof())
		{
			cout << endl ;
			break ;
		}
	}
	
}