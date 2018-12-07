#include<iostream>
#include<cstring>
#include<map>
using namespace std ;

int main(){
	int T,k=1;
	cin >> T;
	while(T--){
		int M,N,num=0 ;
		cin >> M >> N ;
		cin.get();
		
		char set_A[1501][11];
		char set_B[1501][11];
		map<string,bool> m;
		
		for(int i=0 ; i<M ; i++)
			cin.getline(set_A[i],11);
			
		for(int j=0 ; j<N ; j++)
			cin.getline(set_B[j],11);
		
		for(int i=0 ; i<M ; i++)
			for(int j=0 ; j<N ; j++){
				string temp = string(set_A[i]) + string(set_B[j]) ;
				if(!m[temp]){
					m[temp] = true;
					num ++ ;
				}
			}
		
		cout << "Case " << k++ << ": " << num << endl ;
	}
}