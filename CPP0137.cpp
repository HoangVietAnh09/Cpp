#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}
bool checkSoChinhPhuong(ll n){
    ll i = sqrt(n) + 0.5;
    if(1ll*i*i == n) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        int cnt = 0;
        for(ll i = l; i <= r; i++){
            if(checkSoChinhPhuong(i) && check(sqrt(i))){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}