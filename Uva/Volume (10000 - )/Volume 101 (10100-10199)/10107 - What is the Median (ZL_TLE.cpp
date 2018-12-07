#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n ,x=0;
	int data[10000] ;
	while(cin >> n)
	{
		data[x] = n ;
		x++ ;
		sort(data,data+x) ;
		
		if(x%2!=0)
		cout << data[x/2] << endl ;
		else
		cout << (data[x/2 -1] + data[x/2] ) /2 << endl ;
	}
	return 0 ;
}
