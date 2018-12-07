#include<iostream>
using namespace std ;

int cal(int n)
{
	int amount = 0 ;
	
	while(n/10>0)
	{
		amount += n % 10 ;
		n /= 10 ;
	}
	
	amount += n ;
	
	return amount ;
}

int main(){
	int n ;
	while(cin >> n)
	{
		int amount = 0 ;
		
		if(n==0)
		break ;
		
		amount = cal(n) ;
		while(amount>=10)
		amount = cal(amount) ;
		
		cout << amount << endl ;
	}
	
	return 0 ;
}
