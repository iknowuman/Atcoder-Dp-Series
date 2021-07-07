#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[100005][101];ll wt[100005], val[100005];ll  n,W;
ll  knapsack(ll *wt, ll *val, ll W, ll n)
{
  if(n==0||W==0)
    return 0;
  if(dp[W][n]!=-1)
    return dp[W][n];
  if(wt[n-1]<=W)
    return dp[W][n]=max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
  else if(wt[n-1]>W)
    return dp[W][n]=knapsack(wt,val,W,n-1);


}
  
 

int  main()
{

 cin>>n>>W;
 memset(dp,-1,sizeof(dp));

 for(int i=0;i<n;i++)
 {
  cin>>wt[i]>>val[i];
 }

  cout<<knapsack(wt,val,W,n);
 

  return 0;

}