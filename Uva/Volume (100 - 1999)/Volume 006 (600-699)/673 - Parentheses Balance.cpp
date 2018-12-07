#include<iostream>
#include<cstring>
#include<stack>
using namespace std ;

int check_balance(string s){
	
	stack<char> op ;
	
	for(int i=0 ; i<s.length() ; i++){
		
		switch(s[i]){
			
			case '(' : op.push(s[i]) ;	  break ;
			case '[' : op.push(s[i]) ;    break ;
			case ')' : if(!op.empty() && op.top()=='(')
					       op.pop() ;
					   else
				           return 0 ; break ;
			case ']' : if(!op.empty() && op.top()=='[')
					       op.pop() ;
					   else
				           return 0 ; break ;
		}
	}
	
	if(op.empty()!=1)
		return 0 ;
	else
		return 1 ;
}

int main(){
	
	int n ;    cin >> n  ; cin.get() ;
	
	string str ;
	for(int i=0 ; i<n ; i++){
		getline(cin,str) ;
		cout << ( check_balance(str)==1 ? "Yes" : "No" ) << endl ;
	}
}
