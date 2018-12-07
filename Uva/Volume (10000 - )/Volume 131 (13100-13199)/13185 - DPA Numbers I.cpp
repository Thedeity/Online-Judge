#include<iostream>
using namespace std;

int main(){
	int n ;
	cin >> n ;
	
	while(n)
	{
		int data ;
		cin >> data ;
		
		int factor[100] = {0} ;
		int k = 0 ;
		
		for(int i=1 ; i<=data ; i++)
		{
			if(data%i==0)
			{
				factor[k] = i ;
				k++ ;
			}
		}
		
		int temp = 0 ;
		for(int i=0 ; i<k ; i++)
		{
			temp += factor[i] ;
		}
		
		temp -= data ;
		
		if(temp==data)
		cout << "perfect" << endl ;
		else if(temp>data)
		cout << "abundant" << endl ;
		else if(temp<data)
		cout << "deficient" << endl ;
		
		n-- ;
	}
	return 0 ;
}
