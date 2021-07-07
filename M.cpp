#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007
int main() {
  //  cout<<"Hello World!";
  ll n,k;
  cin>>n>>k;
  ll a[n+1];
  for(ll i=1;i<=n;i++)
  cin>>a[i];
  ll dp[n+5][k+5];
  for(ll j=0;j<=k;j++){
      dp[1][j]=(j>a[1])?0:1;
  }
  for(ll i=2;i<=n;i++){
      for(ll j=0;j<=k;j++){
          if(j==0)
          dp[i][j]=dp[i-1][j];
          else
          dp[i][j]=(Mod+dp[i][j-1]+dp[i-1][j]- ((j-1-a[i]>=0)?dp[i-1][j-1-a[i]]:0))%Mod;
      }
  }
  cout<<dp[n][k];
}
