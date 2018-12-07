#include<iostream>
using namespace std ;

int main()
{
	int N,k=0 ;
	cin >> N ;
	while(N--)
	{
		if(k++)
		cout << endl ;
		
		int M , a[1000000]={0} , b[1000000]={0} , amount[1000000]={0} ;
		cin >> M ;
		
		for(int i=0 ; i<M ; i++)
		scanf("%d %d",&a[i],&b[i]) ;
		
		for(int i=M-1 ; i>=0 ; i--)
		{
			amount[i] += a[i] + b[i] ;
			if(amount[i]>=10)
			{
				amount[i] -= 10 ;
				
				if(i==0)
				cout << "1" ;
				else
				amount[i-1] ++ ;
			}
		}
		
		for(int i=0 ; i<M ; i++)
		printf("%d",amount[i]) ;
		
		cout << endl ;
	}
}
