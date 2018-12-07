#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int days,P_num,party[100];
		cin >> days >> P_num ;
		
		for(int i=0 ; i<P_num ; i++)
			cin >> party[i];
		
		int stop_times=0;
		for(int i=1 ; i<days+1 ; i++)
			if(i%7!=0 && i%7!=6)
				for(int j=0 ; j<P_num ; j++)
					if(i%party[j]==0){
						stop_times ++ ;
						break ;
					}

		cout << stop_times << endl ;
	}
	
	return 0;
}
