#include<iostream>
using namespace std ;

int main(){
	int T ;	cin >> T ;
	int M,N,Q,r,c ;
	char square[101][101] ;
	
	while(T--){
		cin >> M >> N >> Q ;
		cout << M << " " << N << " " << Q << endl ;
		for(int i=0 ; i<M ; i++)
			for(int j=0 ; j<N ; j++)
				cin >> square[i][j] ;
		
		int x1,x2,y1,y2 ;
		while(Q--){
			int len = 1 ;
			cin >> r >> c ;
			char center = square[r][c] ;
			x1=c-1,
			x2=c+1,
			y1=r-1,
			y2=r+1;
			
			bool fin = false ;
			while(!fin){
				if(x1<0 || x2>=N || y1<0 || y2>=M)	break ;
				for(int i=y1 ; i<=y2 ; i++){
					for(int j=x1 ; j<=x2 ; j++){
						if(square[i][j]!=center){
							fin = true ;
							break ;
						}
						if(i==y2 && j==x2)	len += 2 ;
					}
					
					if(fin)	break ;
				}
				/*
				cout << " ===== =====" << endl ;
				for(int i=0 ; i<M ; i++){
					for(int j=0 ; j<N ; j++)
					cout << square[i][j] ;
						cout << endl ;
				}*/
				if(fin)	break ;
				x1-- , x2++ , y1-- , y2++ ;
			}
			cout << len << endl ;
		}
	}
	return 0 ;
}
