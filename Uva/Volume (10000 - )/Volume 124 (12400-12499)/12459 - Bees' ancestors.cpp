#include<iostream>
using namespace std ;

int main(){
	int gen ;
	
	long long int ancestor[80] ;
		       	  ancestor[0] = 1 ;
			      ancestor[1] = 2 ;
			
	for(int i=2 ; i<80 ; i++)
	ancestor[i] = ancestor[i-1] + ancestor[i-2] ;
	
	while(cin >> gen)
	{
		if(gen==0)
		break ;
		
		cout << ancestor[gen-1] << endl ;
	}
	
	return 0 ;
}
