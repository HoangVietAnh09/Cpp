#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll a, ll b, ll p){
    if(b == 0) return 0;
    ll x = solve(a, b/2, p);
    if(b%2 == 0) return (2*(x%p))%p;
    else return (a%p + 2*(x%p))%p;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll a, b, p;
        cin >> a >> b >> p;
        cout << solve(a, b, p) << endl;
    }

    return 0;
}