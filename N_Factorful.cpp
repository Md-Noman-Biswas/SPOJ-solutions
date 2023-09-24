#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<bool> isPrime(N, 1);
vector<int> lp(N), hp(N);
unordered_set<int> prime_factors;//O(1)

void siv(){
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i < N; i++){
        if(isPrime[i] == 1){
            lp[i] = hp[i] = i;
            for(int j = 2*i; j < N; j += i){
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0){
                    lp[j] = i;
                }
            }
        }
    }
}

void print_factors(int num){
    while(num > 1){
        int prime_factor = hp[num];
        while(num % prime_factor == 0){
            num /= prime_factor;
            prime_factors.insert(prime_factor);
        }
    }
    return prime_factors[num];
}


void solve(){
    int q;
    cin >> q;
    while(q--){
        int a, b, n;
        cin >> a >> b >> n;
        
    }
}

int main(){
    siv();
    solve();
}
    