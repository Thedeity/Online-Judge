#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	int I ;
	while(cin >> I)
	{
		if(I==0)
		return 0 ;
		
		int bit_number = 0 ;
		for(int i=0 ; pow(2,bit_number)<=I ; i++)
		bit_number ++ ;
		
		int binary[32]={0} , num = 0 ;
		
		for(int i=0 ; I>0 ; i++)
		{
			int temp = pow(2,bit_number-i-1) ;
			
			if(I>=temp)
			{
				I -= temp ;
				binary[i] = 1 ;
				num ++ ;
			}
		}
		
		cout << "The parity of " ;
		
		for(int i=0 ; i<bit_number ; i++)
		cout << binary[i] ;
		
		cout << " is " << num << " (mod 2)." << endl ;
	}
	
	
}
