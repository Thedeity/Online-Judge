#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cin >> n ;
	while(n)
	{
		float number , amount = 0 , average ;
		cin >> number ;
		
		float grade[1000] ;
		for(int i=0 ; i<number ; i++)
		{
			cin >> grade[i] ;
			amount += grade[i] ;
		}
		average = amount / number ;

		int object = 0 ;
		for(int i=0 ; i<number ; i++)
		{
			if(grade[i]>average)
			object ++ ;
		}
		
		cout << fixed << setprecision(3) << object / number * 100  << "%" << endl ;
		
		n-- ;
	}
	
	return 0 ;
}
