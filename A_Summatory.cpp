#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const ll M = 1000000003;
const int N = 1000000 + 7;


ll prefCubee[N];

void prefCube(){
    ll temp = 0;
    for(ll i=1; i<=N; i++){
        temp = (temp + i*i*i) % M;
        prefCubee[i] = (prefCubee[i-1] + temp) % M;
    }
}

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    cout << prefCubee[n] << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    prefCube();
    while(t--) {
        solve();
    }
    return 0;
}