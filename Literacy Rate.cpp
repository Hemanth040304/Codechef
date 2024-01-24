//https://www.codechef.com/problems/LITRATE?tab=statement
//Starters 118

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a*0.75<=b)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
