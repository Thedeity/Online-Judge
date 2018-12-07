#include<iostream>
#include<queue>
using namespace std ;

int main(){
	
	queue<int> q ;
	int test , k=0 ;
	cin >> test ;
	
	while(true){
		
		int num=0,n ;
		cin >> n ;
		
		while(true){
			
			for(int i=0 ; i<n ; i++)
				q.push(i+1) ;
				
			while(q.size()!=1){
				int temp = q.front() ;
				q.pop() ;
				q.push(temp) ;
				
				if(q.size()!=1)
					q.pop() ;
			}
			
			if(q.front()==n){
				n = q.front() ;
				q.pop() ;
				break ;
			}
				
			n = q.front() ;
			q.pop() ;
			num++ ;
		}
		
		cout << "Case " << ++k << ": " << num << " " << n << endl ; 

		if(k==test)
			break ;
	}
	return 0 ;
}
