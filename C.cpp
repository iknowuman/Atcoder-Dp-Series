#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //cout<<"Hello World!";
    ll n;
    cin>>n;
    ll arr[n+1][4];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=3;j++){
            cin>>arr[i][j];
        }
    }
    ll dp[n+1][4];
    memset(dp,0,sizeof(dp));
    dp[1][1]=arr[1][1];
     dp[1][2]=arr[1][2];
      dp[1][3]=arr[1][3];
      for(ll i=2;i<=n;i++){
          dp[i][1]=arr[i][1] + max(dp[i-1][2],dp[i-1][3]);
              dp[i][2]=arr[i][2] + max(dp[i-1][1],dp[i-1][3]);
                  dp[i][3]=arr[i][3] + max(dp[i-1][1],dp[i-1][2]);
      }
      cout<<max(dp[n][1],max(dp[n][2],dp[n][3]));
}
