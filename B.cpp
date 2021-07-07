#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //cout<<"Hello World!";
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll dp[n+1];
    dp[1]=0;

    for(ll i=2;i<=n;i++){
       dp[i]=1e9;
       for(ll j=1;j<=k;j++){
           if((i-j)>=1){
               dp[i]=min(dp[i],abs(a[i]-a[i-j])+dp[i-j]);
           }
       }
    }
    cout<<dp[n]<<endl;
}