//310
#include<iostream>
using namespace std ;

int main()
{
	int T ;
	cin >> T ;
	while(T)
	{
		int score = 0 , bonus = 1 ;
		
		char test[81] = {'\0'} ;
		cin >> test ;
		
		for(int i=0 ; test[i]!='\0' ; i++)
		{
			if(test[i]=='O')
			{
				score += bonus ;
				bonus ++ ;
			}
			else if(test[i]=='X')
			bonus = 1 ;
		}
		
		
		cout << score << endl ;
		
		T-- ;
	}
}
