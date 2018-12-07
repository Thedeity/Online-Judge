#include<iostream>
#include<queue>
using namespace std ;

int main(){
	
	int N ;
	queue<int> q ;
	
	while(cin >> N){
		
		int m = 1 ;
		
		if(!N)
			return 0 ;
			
		while(m){
			
			for(int i=0 ; i<N ; i++)
				q.push(i+1) ;
			
			int j=1 ;
			while(q.size()!=1){
				
				if((j-1)%m==0 || j==1)
					q.pop() ;
				else{
					int temp = q.front() ;
					q.pop() ;
					q.push(temp) ;
				}
				j++ ;
			}
			
			int remain = q.front() ;
			q.pop() ;
			
			if(remain!=13)
				m++ ;
			else
				break ;
		}
		cout << m << endl ;
	}
	return 0 ;
}
