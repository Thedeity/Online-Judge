#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;

int main()
{
	int N ;
	cin >> N ;
	
	while(N)
	{
		double Ax,Ay,Bx,By,Cx,Cy ;
		cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy ;
		
		double area = abs(Ax*By - Ay*Bx + Bx*Cy - By*Cx + Cx*Ay - Cy*Ax) / 2 ;
		cout << fixed << setprecision(0) << (area/7) << endl ;
		
		N-- ;
	}
	return 0 ;
}
