#include<iostream>
using namespace std ;

int main(){
	int n ;
	cin >> n ;
	
	while(n)
	{
		int f ;
		long long int data[20][3] ;
		cin >> f ;
		
		for(int i=0 ; i<f ; i++)
		{
			for(int j=0 ; j<3 ; j++)
			cin >> data[i][j] ;
		}
		
		long long int bonus = 0 ;
		
		for(int i=0 ; i<f ; i++)
		bonus += data[i][0] * data[i][2] ;
		
		cout << bonus << endl ;
		n-- ;
	}
	
	return 0 ;
}
