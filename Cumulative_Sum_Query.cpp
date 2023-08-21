#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
int arr[N];
int prefArr[N+10];


void fillPrefixSum(int arr[], int n, int prefSum[]){
    for(int i=1; i<=n; i++){
        prefSum[i] = prefSum[i-1] + arr[i];
    }
}


void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> arr[i];
    fillPrefixSum(arr, n, prefArr);
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << prefArr[r+1] - prefArr[l] << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}