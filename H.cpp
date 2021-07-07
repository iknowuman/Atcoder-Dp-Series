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
char grid[1005][1005];
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
 ll n,m;
 cin>>n>>m;

 for(ll i=1;i<=n;i++){
   for(ll j=1;j<=m;j++)
      cin>>grid[i][j];
   }
 
 ll dp[n+1][m+1];
// memset(dp,0,sizeof(dp));
 dp[n][m]=1;
 for(ll i=n;i>=1;i--){
   for(ll j=m;j>=1;j--){
      if(i==n && j==m)
         continue;
       if(grid[i][j]=='#')
         dp[i][j]=0;
      else 
         dp[i][j]=(((i==n) ? 0: dp[i+1][j]) + ((j==m) ? 0:dp[i][j+1]))%MOD;
   }
 }
 ll ans=dp[1][1];
 debug(dp[1][1]);

 cout<<ans;
 
} 


	

}