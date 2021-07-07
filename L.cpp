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
ll dp[3005][3005][2];
ll solve(vector<ll>&v, ll i, ll j, ll turn){
   if(i>j)
      return 0;
   if(dp[i][j][turn]!=-1)
      return dp[i][j][turn];
   if(turn==1)
      return dp[i][j][turn]=max(v[i]+solve(v,i+1,j,0),v[j]+solve(v,i,j-1,0));
   
   else
      return dp[i][j][turn]=min(solve(v,i+1,j,1),solve(v,i,j-1,1));
   

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
  ll n,k;
 cin>>n;
 vector<ll>v;
 ll sum=0;
 for(ll i=0;i<n;i++){
   ll x;
   cin>>x;
   sum+=x;
   v.push_back(x);
 }
 memset(dp,-1,sizeof(dp));
 ll final=solve(v,0,n-1,1);
 //cout<<final<<endl;
 //cout<<sum<<endl;
 cout<<2*final-sum;



} 


	

}