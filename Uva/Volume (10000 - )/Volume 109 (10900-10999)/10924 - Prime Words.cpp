#include<iostream>
#include<cstring>
using namespace std;

// a 97
// A 65
int main(){
	char s[20] ;
	while(cin >> s)
	{
		int temp = 0 ;
		int prime = 1 ;
		
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if(s[i]>=97)
			temp += (int)s[i] - 96 ;
			else
			temp += (int)s[i] - 38 ;
		}
		
		for(int i=2 ; i<=temp/2 ; i++)
		{
			if(temp%i==0)
			{
				prime = 0 ;
			}
		}
		
		if(prime==1)
		cout << "It is a prime word." << endl ;
		else
		cout << "It is not a prime word." << endl ;
	}
}
