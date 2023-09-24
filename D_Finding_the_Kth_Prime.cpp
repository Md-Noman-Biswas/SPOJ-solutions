#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 90000000;

vector<bool> isPrime(N+10, 1);
vector<ll> hsh;

void siv(){
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i*i<=N; i++){
        if(isPrime[i] == true){
            for(int j = 2*i; j<=N; j+=i){
                isPrime[j] = false;
            }
        }
    }
    hsh.push_back(2);
    for(int i=2; i<=N; i++){
        if(isPrime[i] == true){
            hsh.push_back(i);
        }
    }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    siv();
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << hsh[x] << "\n";
    }
    return 0;
}