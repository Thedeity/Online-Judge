#include<iostream>
using namespace std ;

int main()
{
	int a,b ;
	while(cin >> a >> b)
	{
		if(a==0&&b==0)
		return 0 ;
		
		int num=0 ;
		for(int i=1 ; i<1000 ; i++)
		{
			int square = i*i ;
			
			if(a<=square&&square<=b)
			num ++ ;
			else if(square>b)
			break ;
		}
		cout << num << endl ;
	}
}
