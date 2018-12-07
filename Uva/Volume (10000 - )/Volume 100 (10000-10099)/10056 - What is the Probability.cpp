#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main()
{
	int S ;
	cin >> S ;
	
	while(S--)
	{
		int N,I ;
		double p ;
		
		cin >> N >> p >> I ;
		
		if(p==0)
		cout << "0.0000\n" ;
		else
		cout << fixed << setprecision(4) << p * pow(1-p,I-1) / (1- pow(1-p,N)) << "\n" ;
	}
}
