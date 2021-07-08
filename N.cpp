#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e14
ll sum[405][405];
ll dp[405][405];
 
ll solve(vector<ll>&arr,ll i,ll j){
    if(i==j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
      ll mini=INF;
    for(ll k=i;k<j;k++)
    {
mini=min(mini,sum[i][j]+solve(arr,i,k)+solve(arr,k+1,j));
    }
 
 
return dp[i][j]=mini;
}
 
void prefixsum(vector<ll>&arr,ll n)
{
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            sum[i][j]=arr[j]+((j==i)?0:sum[i][j-1]);
        }
    }
}
 
int main()
{ 
    ll n;
    cin>>n;
    vector<ll>arr(n+1);
    memset(dp,-1, sizeof(dp));
   
  for(ll i=1;i<=n;i++)
    cin>>arr[i];
    prefixsum(arr,n);
    cout<<solve(arr,1,n);
    return 0;
 
}
