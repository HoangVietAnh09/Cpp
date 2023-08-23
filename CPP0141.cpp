#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll check(ll n){
    ll a = 0, b = 1, c = 0;
    if(n < 2)
        return 1;
    while(c < n){
        c = a + b;
        a = b;
        b = c;
    }
    if(c == n)
        return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n)){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}