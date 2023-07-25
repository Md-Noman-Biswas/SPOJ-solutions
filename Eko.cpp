#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
int trees;
int sizes[N];
long long amount;
bool can_fullfill(int sawblade){
    ll sum = 0;
    for(int i=0; i<trees; i++){
        if(sizes[i] >= sawblade){
            sum += (sizes[i] - sawblade);
        }
    }
    return sum >= amount;
}
void solve(){
    cin >> trees;
    cin >> amount;
    for(int i=0; i<trees; i++) cin >> sizes[i];
    sort(sizes, sizes + trees);
    int l = 0, h =  1e9;
    while(h-l > 1){
        int mid = (l+h)/2;
        if(can_fullfill(mid)){
            l = mid;
        }else{
            h = mid - 1;
        }
    }
    if(can_fullfill(h)){
        cout << h << "\n";
    }else{
        cout << l << "\n";
    }
}
int main(){
    solve();
}