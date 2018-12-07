#include<iostream>
using namespace std ;

int main()
{
	int T,k=1 ;
	cin >> T ;
	cin.get() ;
	
	while(T--)
	{
		char num[30] ;
		cin.getline(num,30) ;
		
		long long N = 0 , non = 0 , matrix[100][100] ;
		for(int i=0 ; num[i]!='\0' ; i++)
		{
			if('0'<=num[i]&&num[i]<='9')
			{
				N += num[i] - '0' ;
				
				if('0'<=num[i+1]&&num[i+1]<='9')
				N *= 10 ;
			}
		}
		
		for(int i=0 ; i<N ; i++)
			for(int j=0 ; j<N ; j++)
			{
				cin >> matrix[i][j] ;
				
				if(matrix[i][j]<0)
				non = 1 ;
			}
		
		
		if(non)
		{
			cout << "Test #" << k++ << ": Non-symmetric.\n" ;
			cin.get() ;
			continue ;
		}
		
		for(int i=0 ; i<N ; i++)
			for(int j=0 ; j<N ; j++)
			if(matrix[i][j]!=matrix[N-i-1][N-j-1])
				non = 1 ;
		
		
		if(non)
		cout << "Test #" << k++ << ": Non-symmetric.\n" ;
		else
		cout << "Test #" << k++ << ": Symmetric.\n" ;
		
		cin.get() ;
	}
}
