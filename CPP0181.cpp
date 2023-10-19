#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll a, x, y;
        cin >> a >> x >> y;
        for(ll i = 0; i < gcd(x, y); i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}