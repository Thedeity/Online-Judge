#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	char s[10000] ;
	int temp = 0 ;
	
	while( (cin.getline(s,10000) ) )
	{
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if(s[i]=='"')
			{
				if(temp==0)
				{
					cout << "``" ;
					temp = 1 ;
				}
				else
				{
					cout << "''" ;
					temp = 0 ;
				}
			}
			else
			cout << s[i] ;
		}
		cout << endl ;
	}
	return 0 ;
}
