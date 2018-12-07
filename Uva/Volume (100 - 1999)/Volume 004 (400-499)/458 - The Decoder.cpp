// ASCII 67 = C , 74 = J

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char x[1000] ;
	while( cin.getline(x,1000)  )
	{
		int size = strlen(x) ;
		for(int i=0 ; i<size ; i++)
		{
			cout << char(x[i]-7) ;
		}
		cout << endl ;
	}

}
