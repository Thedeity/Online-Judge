#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	char s[200][200] = {{'\0'}};
	int num = 0 , max = 0 ;
	
	while(cin.getline(s[num],200))
	{
		int temp = strlen(s[num]) ;
		
		if(temp>max)
		max = temp ;
		
		num ++ ;
	}
	
	for(int i=0 ; i<max ; i++)
	{
		for(int j=num-1 ; j>=0 ; j--)
		{
			if(s[j][i]=='\0')
			cout << " " ;
			else
			cout << s[j][i] ;
		}
		
		cout << endl ;
	}
	
	return 0 ;
}	
