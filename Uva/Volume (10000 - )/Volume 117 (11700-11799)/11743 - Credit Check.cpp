#include<iostream>
using  namespace std;

int main(){
	int n ;
	cin >> n ;
	while(n)
	{
		int num[4] ;
		for(int i=0 ; i<4 ; i++)
		cin >> num[i] ;
		
		int a=0 , b=0 , temp ;
		for(int i=0 ; i<4 ; i++)
		{
			int temp = num[i] % 10 ;
			b += temp ;
			
			num[i] /= 10 ;
			temp = num[i] % 10 ;
			temp *= 2 ;
			if(temp/10>0)
			{
				int x = temp%10 ;
				temp /= 10 ;
				temp += x ;
			}
			a += temp ;
			
			
			
			num[i] /= 10 ;
			temp = num[i] % 10 ;
			b += temp ;
			
			num[i] /= 10 ;
			temp = num[i] % 10 ;
			temp *= 2 ;
			if(temp/10>0)
			{
				int x = temp%10 ;
				temp /= 10 ;
				temp += x ;
			}
			a += temp ;
		}
		
		if( (a+b)%10==0 )
		cout << "Valid" << endl ;
		else
		cout << "Invalid" << endl ;
		
		n-- ;
	}
	return 0 ;
}
