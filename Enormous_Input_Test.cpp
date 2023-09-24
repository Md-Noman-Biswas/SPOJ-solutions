#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while(n--){
        int x;
        cin >> x;
        if(x % k == 0){
            ans++;
        }
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}