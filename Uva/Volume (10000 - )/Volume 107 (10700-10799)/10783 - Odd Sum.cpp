#include<iostream>
using namespace std;

int main(){
	int n ,k=1;
	cin >> n ;
	while(n)
	{
		int a,b ;
		int ans = 0 ;
		cin >> a >> b ;
		
		if(a==b)
		{
			if(a%2==1)
			ans = a ;
		}
		else
		{
			for(int i=a ; i<=b ; i++)
			{
				if(i%2==1)
				ans += i ;
			}
		}
		
		cout << "Case " << k << ": " << ans << endl ;
		k++,n-- ;
	}
	
}
