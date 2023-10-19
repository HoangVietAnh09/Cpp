#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
ll boi(ll a, ll b){
    return a*b/gcd(a, b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll x, y, z, n, t;
        cin >> x >> y >> z >> n;
        ll tmp = boi(boi(x,y),z);
        ll a = pow(10,n-1), b = pow(10,n)-1;
        if(tmp > b){
            cout << "-1" << endl;
        }else if(a%tmp == 0){
            cout << a << endl;
        }else{
            t = a/tmp;
            cout << (t+1)*tmp << endl;
        }
    }
    return 0;
}