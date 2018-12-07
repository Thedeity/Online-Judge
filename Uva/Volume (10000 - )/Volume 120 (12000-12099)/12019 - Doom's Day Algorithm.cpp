#include<iostream>
using namespace std;
// 2011.1.1 = Saturday

int main(){
	int n ;
	cin >> n ;
	while(n)
	{
		int m,d,temp=5 ;
		cin >> m >> d ;
		
		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 } ;
		for(int i=0 ; i<m-1 ; i++)
		{
			temp += days[i] ;
		}
		temp += d ;
		
		temp %= 7 ;
		
		switch(temp)
		{
			case 0 :
				cout << "Sunday" << endl ;
				break ;
			case 1 :
				cout << "Monday" << endl ;
				break ;
			case 2 :
				cout << "Tuesday" << endl ;
				break ;
			case 3 :
				cout << "Wednesday" << endl ;
				break ;
			case 4 :
				cout << "Thursday" << endl ;
				break ;
			case 5 :
				cout << "Friday" << endl ;
				break ;
			case 6 :
				cout << "Saturday" << endl ;
				break ;
		}
		
		n-- ;
	}
}
