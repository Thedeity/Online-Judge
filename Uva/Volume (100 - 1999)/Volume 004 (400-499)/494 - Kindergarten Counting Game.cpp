#include<iostream>
#include<cstring>
using namespace std ;

int main(){
	char s[10000] ;
	
	while(cin.getline(s,10000))
	{
		int num = 0 ;
		for(int i=0 ; i<strlen(s) ; i++)
		{
			if(  ((s[i]>='A')&&(s[i]<='Z')) || ((s[i]>='a')&&(s[i]<='z')) )
			{
				if(  ((s[i+1]>='A')&&(s[i+1]<='Z')) || ((s[i+1]>='a')&&(s[i+1]<='z'))  )
				continue ;
				else
				num ++ ;
			}
		}
	    cout << num << endl ;
	}
	return 0;  
}
