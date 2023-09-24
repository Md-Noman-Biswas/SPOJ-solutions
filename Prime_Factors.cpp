#include <bits/stdc++.h>
using namespace std;

const int N = 100000+1;
vector<bool> isPrime(N, 1);
vector<int> lp(N), hp(N);
unordered_set<int> prime_factors;

void siv(){
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<=N; i++){
        if(isPrime[i] == true){
            lp[i] = hp[i] = i;
            for(int j=2*i; j<=N; j+=i){
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
    for(int factor: prime_factors){
            cout << factor << " ";
    }
    cout << "\n";
}

void solve(){
    siv();
    for(int i=2; i<=100000; i++){
        cout << i << ": ";
        print_factors(i);
        prime_factors.clear();
    }
    
    
}

int main(){
    solve();
}