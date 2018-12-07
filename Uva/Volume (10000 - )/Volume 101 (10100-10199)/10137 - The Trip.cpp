#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,k=1;
	while(cin >> n){
		if(!n)
			return 0;
		
		double cost[1001];
		double amount=0,sum=0,temp ;
		
		for(int i=0 ; i<n ; i++){
			cin >> temp;
			cost[i] = temp*100;
			sum += cost[i];
		}
			
		double average = int((sum/n) + 0.5);
		double higher=0 , lower=0;
		for(int i=0 ; i<n ; i++)
			if(cost[i]>average)	higher += cost[i]-average;
			else	lower += average-cost[i];

		amount = min(higher,lower);
		amount /= 100;
		
		cout << "$" << fixed << setprecision(2) << amount << endl;
	}
}
