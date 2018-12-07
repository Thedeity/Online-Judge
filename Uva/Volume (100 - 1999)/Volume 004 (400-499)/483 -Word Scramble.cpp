#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

int main()
{
	char s[5000] ;
	while(cin.getline(s,5000))
	{
		int a = 0 ;
		
		for(int i=0 ; i<strlen(s)+1 ; i++)
		{
			if(s[i]==' ' || s[i]=='\0')
			{
				reverse(s+a,s+i) ;
				a = i+1 ;
			}
		}
		cout << s << endl ;
	}
}
