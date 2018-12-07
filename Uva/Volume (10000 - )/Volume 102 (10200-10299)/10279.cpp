#include<iostream>
#include<cstring>
using namespace std ;

int sweeper(int i , int j , int len , char mine[][10]){
	
	int num=0 ;
	
	if(i-1>=0 && j-1>=0 && mine[i-1][j-1]=='*')
		num ++ ;
		
	if(i>=0 && j-1>=0 && mine[i][j-1]=='*')
		num ++ ;
		
	if(i+1<len && j-1>=0 && mine[i+1][j-1]=='*')
		num ++ ;
		
	if(i-1>=0 && j>=0 && mine[i-1][j]=='*')
		num ++ ;
		
	if(i+1<len && j>=0 && mine[i+1][j]=='*')
		num ++ ;
		
	if(i-1>=0 && j+1<len && mine[i-1][j+1]=='*')
		num ++ ;
		
	if(i>=0 && j+1<len && mine[i][j+1]=='*')
		num ++ ;
		
	if(i+1<len && j+1<len && mine[i+1][j+1]=='*')
		num ++ ;
	
	return num ;
}


int main(){
	
	int game , k = 0 ;
	cin >> game ;
	
	while(game--){
		
		if(k++)
		cout << endl ;
		
		int len , boom = 0 ;
		cin >> len ;
		
		char mine[10][10] ;
		char find[10][10] ;
		int ans[10][10] = {{0}} ;
		
		for(int i=0 ; i<len ; i++)
			for(int j=0 ; j<len ; j++)
				cin >> mine[i][j] ;
		
		for(int i=0 ; i<len ; i++)
			for(int j=0 ; j<len ; j++)
				cin >> find[i][j] ;
				
		for(int i=0 ;i<len ; i++){
				
			for(int j=0 ; j<len ; j++){
				
				if(find[i][j]=='x'){
					
					if(mine[i][j]=='*')
						boom = 1 ;
						
					ans[i][j] = sweeper(i,j,len,mine) ;
				}
			}
		}
		
		
		
		if(boom==1)
			for(int i=0 ; i<len ; i++){
					
					for(int j=0 ; j<len ; j++)
						if(mine[i][j]=='*')
							cout << "*" ;
						else if(find[i][j]=='x')
							cout << ans[i][j] ;
						else
							cout << "." ;
						
				cout << endl ;
			}
		else
			for(int i=0 ; i<len ; i++){
				
				for(int j=0 ; j<len ; j++)
					if(find[i][j]=='x')
						cout << ans[i][j] ;
					else
						cout << "." ;
						
				cout << endl ;
			}
	}
}
