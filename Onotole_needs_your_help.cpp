#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1073741824 ;
const int N = 1e6 + 7;

ll pref1[N];            
ll pref2[N];

void solve(){
    int n;
    cin >> n;
    int x = 0;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        x = x ^ t;
    }
    cout << x << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
