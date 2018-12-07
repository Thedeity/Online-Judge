#include<iostream>
#include<queue>
using namespace std ;


class Oil{
	public :
		Oil(int i,int j){
			pos_x = i ;
			pos_y = j ;
		}
		
		int pos_x ;
		int pos_y ;
};


int main(){
	int m,n,num ;
	char grid[100][100] ;
	bool check[100][100] = {{false}} ;
	
	while(cin >> m >> n){
		if(!m && !n)
			return 0 ;
		
		num = 0 ;
		
		for(int i=0 ; i<100 ; i++)
			for(int j=0 ; j<n ; j++)
				check[i][j] = false ;
				
		for(int i=0 ; i<m ; i++)
			for(int j=0 ; j<n ; j++)
				cin >> grid[i][j] ;
		
		queue <Oil> q ;
		
		for(int a=0 ; a<m ; a++)
			for(int b=0 ; b<n ; b++)
				if(grid[a][b]=='@'){
					Oil *temp = new Oil(a,b) ;
					q.push(*temp) ;
					check[a][b] = true ;
					while(q.size()!=0){
						int i = q.front().pos_x ;
						int j = q.front().pos_y ;
						
						if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='@' && check[i-1][j-1] == false){  // 左上 
							Oil *next = new Oil(i-1,j-1) ;
							check[i-1][j-1] = true ;
							q.push(*next) ;
						}
						if(j-1>=0 && grid[i][j-1]=='@' && check[i][j-1] == false){  // 上 
							Oil *next = new Oil(i,j-1) ;
							check[i][j-1] = true ;
							q.push(*next) ;
						}
						if(i+1<=m && j-1>=0 && grid[i+1][j-1]=='@' && check[i+1][j-1] == false){  // 右上 
							Oil *next = new Oil(i+1,j-1) ;
							check[i+1][j-1] = true ;
							q.push(*next) ;
						}
						if(i-1>=0 && grid[i-1][j]=='@' && check[i-1][j] == false){  // 左 
							Oil *next = new Oil(i-1,j) ;
							check[i-1][j] = true ;
							q.push(*next) ;
						}
						if(i+1<=m && grid[i+1][j]=='@' && check[i+1][j] == false){  // 右 
							Oil *next = new Oil(i+1,j) ;
							check[i+1][j] = true ;
							q.push(*next) ;
						}
						if(i-1>=0 && j+1<=n && grid[i-1][j+1]=='@' && check[i-1][j+1] == false){  // 左下 
							Oil *next = new Oil(i-1,j+1) ;
							check[i-1][j+1] = true ;
							q.push(*next) ;
						}
						if(j+1<=n && grid[i][j+1]=='@' && check[i][j+1] == false){  // 下 
							Oil *next = new Oil(i,j+1) ;
							check[i][j+1] = true ;
							q.push(*next) ;
						}
						if(i+1<=m && j+1<=n && grid[i+1][j+1]=='@' && check[i+1][j+1] == false){  // 右下 
							Oil *next = new Oil(i+1,j+1) ;
							check[i+1][j+1] = true ;
							q.push(*next) ;
						}

						grid[q.front().pos_x][q.front().pos_y] = '*' ;
						q.pop() ;
					}
					num ++ ;
				/*	cout << endl ;
					for(int i=0 ;i<m;i++)
						for(int j=0;j<n;j++){
							cout << grid[i][j] ;
							if(j==n-1)
								cout << endl ;
						}*/
				}

		cout << num << endl ;
	}
}
