#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	while(cin >> n)
	{
		if(n==0)
		break ;
		
		long long int data[5000] = {0} ;
		long long int total[5000] = {0} ;
		long long int cost = 0 ;
		
		
		for(int i=0 ; i<n ; i++)
		{
			cin >> data[i] ;
		}
		sort(data,data+n) ;
		
		for(int i=0 ; i<n-1 ; i++)
		{
			cost = data[i] + data[i+1] ;
			data[i+1] = cost ;
			total[i] = cost ;
			sort(data+i+1,data+n) ;
		}
		
		long long int amount = 0 ;
		for(int i=0 ; i<n-1 ; i++)
		{
			amount += total[i] ;
		}
		
		cout << amount << endl ;
	}
}
