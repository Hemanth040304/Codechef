/* https://www.codechef.com/problems/SHORTSPELL */
 //Starters 117


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        for (int i = 0; i < n-1; ++i) {
            if (s[i] > s[i+1]) {
                cout<<s.substr(0, i)+s.substr(i+1)<<"\n";
                f=1;
                break;
            }
        }
        if(f==0)cout<<s.substr(0, n - 1)<<"\n";
    }
}
