#include<iostream>
using namespace std;

int main()
{
	int n ;
	cin >> n ;
	while(n)
	{
		int wave ;
		int num ;
		int count =0 ;
		cin >> wave >> num ;
		for(int i=0 ; i<num ; i++)
		{
			if(count>0)
			cout << endl ;
			
			for(int j=1 ; j<wave ; j++)
			{
				for(int k=1 ; k<j+1 ; k++)
				{
					cout << j ;
				}
				cout << endl ;
			}
			
			for(int j=wave ; j>0 ; j--)
			{
				for(int k = 0 ; k<j ; k++)
				{
					cout << j ;
				}
				cout << endl ;
			}
			count ++ ;
		}
		if(n!=1)
		cout << endl ;
		
		n-- ;
	}
}
