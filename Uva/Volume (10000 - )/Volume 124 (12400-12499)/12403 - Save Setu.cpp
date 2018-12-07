#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int T , amount = 0 ;
	cin >> T ;
	
	while(T)
	{
		char act[10] ;
		cin >> act ;
		
		if(strcmp(act,"donate")==0)
		{
			int temp ;
			cin >> temp ;
			amount += temp ;
		}
		else if(strcmp(act,"report")==0)
		cout << amount << endl ;
		
		T-- ;
	}
	return 0 ;
}
