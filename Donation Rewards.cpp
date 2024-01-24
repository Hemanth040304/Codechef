/* https://www.codechef.com/problems/DOREWARD */
//Starters 95

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=3)cout<<"BRONZE\n";
		else if(n>3 and n<=6)cout<<"SILVER\n";
		else cout<<"GOLD\n";
	}
}
