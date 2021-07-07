#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //cout<<"Hello World!";
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll dp[n+1];
    dp[1]=0;
    dp[2]=abs(a[2]-a[1]);
    for(ll i=3;i<=n;i++){
        ll a1=abs(a[i]-a[i-1])+dp[i-1];
        ll b1=abs(a[i]-a[i-2])+dp[i-2];
        dp[i]=min(a1,b1);
    }
    cout<<dp[n]<<endl;
}
