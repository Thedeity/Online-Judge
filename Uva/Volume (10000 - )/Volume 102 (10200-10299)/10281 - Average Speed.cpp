#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std ;

int t(string s){
	int t = 3600*(10*(s[0]-'0') + (s[1]-'0')) + 60*(10*(s[3]-'0') + (s[4]-'0')) + ((10*(s[6]-'0')) +s[7]-'0') ;
	return t ;
}

int main(){
	
	string data ;
	double time[10000] = {0} , speed=0 , distance=0 ;
	int k=0 ;
	
	while(getline(cin,data)){
		time[k] = t(data) ;
		
		if(k>0)
			distance += (time[k]-time[k-1]) * speed / 3600 ;
		if(data.length()>9){
			speed = 0 ;
			for(int i=9 ; i<data.length() ; i++)
				if('0'<=data[i] && data[i]<='9'){
					speed *= 10 ;
					speed += data[i] - '0' ;
				}
		}
		else{
			cout << fixed << data << " " << setprecision(2) << distance << " km\n" ;
		}
		k++ ;
	}
}


