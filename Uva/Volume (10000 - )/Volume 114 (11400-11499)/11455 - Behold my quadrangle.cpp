// According to other people , the input may include 0 ...
// And someone recommend that using unsigned long long int type to store these integer

#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	
	while(n)
	{
		unsigned long long int line[4] ;
		
		for(int i=0 ; i<4 ; i++)
		cin >> line[i] ;
		
		sort(line,line+4) ;
		
		if(line[0]==0)
		cout << "banana" << endl ;
		else if(line[0]==line[1] && line[1]==line[2] && line[2]==line[3]) 
		cout << "square" << endl ;
		else if(line[0]==line[1] && line[2]==line[3])
		cout << "rectangle" << endl ;
		else if(line[0]+line[1]+line[2]>=line[3])
		cout << "quadrangle" << endl ;
		else
		cout << "banana" << endl ;
		
		n-- ;
	}
	return 0 ;
}
