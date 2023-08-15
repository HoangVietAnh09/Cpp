#include <bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(ll a, ll  b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        cout << a*b/gcd(a, b) << " " << gcd(a, b)<< endl;
    }
    return 0;
}