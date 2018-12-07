#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,k=1 ;
	cin >> n;
	while(n)
	{
		long long int line[3] ;
		for(int i=0 ; i<3 ; i++)
		{
			cin >> line[i] ;
		}
		
		sort(line,line+3) ;
		
		if(line[0]+line[1]<=line[2])
		cout << "Case " << k << ": Invalid" << endl ;
		
		else if( (line[0]==line[1])&&(line[1]==line[2]) )
		cout << "Case " << k << ": Equilateral" << endl ;
		
		else if( (line[0]==line[1])||(line[1]==line[2])||(line[0]==line[2]) )
		cout << "Case " << k << ": Isosceles" << endl ;
		
		else
		cout << "Case " << k << ": Scalene" << endl ;
		
		k++,n-- ;
	}  
	
}
