//https://www.codechef.com/problems/STRONGTABLE?tab=statement

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double;
using str = string;

// pairs
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;
using pci = pair<char,int>;
using pcl = pair<char,ll>;
using pcd = pair<char,db>;
#define mp make_pair
#define f first
#define s second


#define tcT template <class T
#define tcTU tcT, class U

tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
#define vi V<int>
#define vb V<bool>
#define vd V<db>
#define vl V<ll>
#define vs V<str>
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<db>;


//vectors
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define pf push_front
#define eb emplace_back
#define acc accumulate
#define ft front()
#define bk back()


#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }


//loops
#define FOR(i, a, b) for(int i = a ; i < b ; ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for(int i = b ; i >= a ; --i)
#define R0F(i, a) ROF(i, 0, a)
//#define 


const int MOD = 1e9+7;
const int MX = (int)2e5 + 5;
const ll BIG = 1e18;


//bitwise ops
constexpr int pct(int x) { return __builtin_popcount(x); }  // # of bits set


ll udiv(ll a, ll b) {
	return a / b + ((a ^ b) > 0 && a % b);
}  // divide a by b rounded up
ll ddiv(ll a, ll b) {
	return a / b - ((a ^ b) < 0 && a % b);
}  // divide a by b rounded down

tcT > bool ckmin(T &a, const T &b) {
	return b < a ? a = b, 1 : 0;
}  // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) {
	return a < b ? a = b, 1 : 0;
}  // set a = max(a,b)



int main(){
	int t;
	cin>>t;
	while(t--){
		int number;
		cin >> number;
		V<int> legs;
		for ( int i = 0; i < number; i++) {
		    int x;
		    cin >> x;
		    legs.eb(x);
		}
		sort (legs.begin(), legs.end());
// 		V<int> big;
		int max_weight = legs[number - 1];
		for (int i = 0; i < number; i++){
		    max_weight = max( max_weight, legs[i] * (number - i));
		}
// 		int weight = 0;
// 		for (int i = 0; i < number; i++){
// 		    max_weight = max( max_weight, legs[i]);
// 		    weight += legs[i];
// 		    big.eb(legs[i]);
// 		    int count = big.size();
// 		    float cutOFF = weight / count;
// 		    int c = 0;
// 		    for (auto it: big){
// 		        if(cutOFF > it)break;
// 		        c++;
// 		    }
// 		    if(c == count)max_weight = max( max_weight, weight);
// 		}
		cout << max_weight << "\n";
	}
}
