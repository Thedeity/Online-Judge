#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n ;
	cin >> n ;
	while(n)
	{
		int line[3] ;
		for(int i=0 ; i<3 ; i++)
		cin >> line[i] ;
		
		sort(line,line+3) ;
		if(line[0]+line[1]>line[2])
		cout << "OK" << endl ;
		else
		cout << "Wrong!!" << endl ;
		
		n-- ;
	}
	return 0 ;
}
