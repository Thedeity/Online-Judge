#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int T ;
	cin >> T ;
	
	for(int i=1 ; i<T+1 ; i++)
	{
		int salary[3] ;
		for(int j=0 ; j<3 ; j++)
		cin >> salary[j] ;
		
		sort(salary,salary+3) ;
		
		cout << "Case " << i << ": " << salary[1] << endl ;
	}
	return 0 ;
}
