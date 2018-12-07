#include<iostream>
using namespace std ;

int main()
{
	int n ;
	while(cin >> n)
	{
		char name[101][101] ;
		for(int i=0 ; i<n ; i++)
		cin >> name[i] ;
		
		int num ;
		
		if(n%16!=0)
		num = n/16 + 1 ;
		else
		num = n/16 ;
		
		for(int i=0,j=0 ; i<16*num ; i++,j++)
		{
			cout << name[j] << ": " ;
			
			if(i%16==11)
			cout << "Rujia" ;
			else if(i%4==0)
			cout << "Happy" ;
			else if(i%4==1)
			cout << "birthday" ;
			else if(i%4==2)
			cout << "to" ;
			else if(i%4==3)
			cout << "you" ;
			
			cout << endl ;
			
			if(j==n-1)
			j = -1 ;
		}
	}
}
