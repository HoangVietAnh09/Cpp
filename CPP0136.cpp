#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll n){
    ll i = sqrt(n)+0.5;
    if(1ll*i*i == n)
        return 1;
    return 0;
}
int prime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int count = 0;
        for(ll i = 2; i <= sqrt(n); i++){
            if(i*i <= n && prime(i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}