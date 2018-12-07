#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
	int k = 0 ;
	char input[10000] ;
	
	while(cin.getline(input,10000))
	{
		int year[10000] , leap = 0 , ordinary = 1 , len = strlen(input) ;
		
		if(k)
		cout << endl ;
		
		int a,b=0,c ;
		for(int i=0 ; i<len ; i++)
		{
			year[i] = int(input[i]) - 48 ;
			b += year[i] ; 
		}
		
		a = 1000*year[len-4] + 100*year[len-3] + 10*year[len-2] + year[len-1] ;	
		if(((a%4==0)&&(a%100!=0)) || (a%400==0))
		{
			leap = 1 , ordinary = 0 ;
			cout << "This is leap year." << endl ;
		}
		
		
		if((b%3==0) && ((year[len-1]==0)||(year[len-1]==5)))
		{
			ordinary = 0 ;
			cout << "This is huluculu festival year." << endl ;
		}
		
		int x=0,y=0 ;
		for(int i=0,j=1 ; i<len,j<len ; i=i+2,j=j+2)
		{
			x += year[i] ;
			y += year[j] ;
			
			c = x-y ;
		}
		
		
		if((leap==1) && ((year[len-1]==5)||(year[len-1]==0)) && (c%11==0))
		{
			ordinary = 0 ;
			cout << "This is bulukulu festival year." << endl ;
		}
		
		if(ordinary==1)
		cout << "This is an ordinary year." << endl ;
		
		k++ ;
	}
}
