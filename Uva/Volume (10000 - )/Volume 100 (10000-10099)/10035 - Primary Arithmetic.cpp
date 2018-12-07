#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int one,two ;
	while(cin >> one >> two)
	{
		if( (one==0)&&(two==0) )
		break ;
		
		int k=0 ;
		int a[11]={0} , b[11]={0} , c[11]={0} ;
		
		for(int i=0 ; i<11 ; i++)
		{
			if(one/10>0)
			{
				a[i] = one % 10 ;
				one /= 10 ;
			}
			else
			{
				a[i] = one ;
				break ;
			}
		}
		
		for(int i=0 ; i<11 ; i++)
		{
			if(two/10>0)
			{
				b[i] = two % 10 ;
				two /= 10 ;
			}
			else
			{
				b[i] = two ;
				break ;
			}
		}
		
		
		for(int i=0 ; i<11 ; i++)
		{
			c[i] += a[i] + b[i] ;
			if(c[i]>=10)
			{
				c[i] -= 10 ;
				c[i+1] ++ ;
				k++ ;
			}
		}
		
		
		if(k==0)
		cout << "No carry operation." << endl ;
		else if(k==1)
		cout << "1 carry operation." << endl ;
		else
		cout << k << " carry operations." << endl ;
	}
	
	return 0 ;
}
