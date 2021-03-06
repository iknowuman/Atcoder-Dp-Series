#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
//#define pb push_back
//#define ppb pop_back
//#define mp make_pair
//#define ff first
//#define ss second
#define PI 3.141592653589793238462
//#define set_bits __builtin_popcountll
//#define sz(x) ((int)(x).size())
//#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

double dp[3005][3005];
double solve(vector<double>&v,ll i, ll x){
if(x==0)
   return 1;
if(i==0)
   return 0;
if(dp[i][x]>-0.9)
   return dp[i][x];
return dp[i][x]=v[i]*solve(v,i-1,x-1)+(1-v[i])*solve(v,i-1,x);

}
int main(){
	  #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
  freopen("Error.txt","w",stderr);
 freopen("output.txt","w",stdout);
    #endif
 fastio();
int t;
t=1;
while(t--){
   //memset(dp,-1,sizeof(dp));
ll N;
cin>>N;
   memset(dp,-1,sizeof(dp));
vector<double>v(N+1);
for(ll i=1;i<=N;i++){
cin>>v[i];

}
double k=solve(v,N,(N+1)/2);
  cout << fixed << setprecision(10)<<k; 
} 


	

}