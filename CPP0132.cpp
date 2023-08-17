#include <bits/stdc++.h>
#include <set>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        set<ll> s;
        for(ll i = 2; i <= sqrt(n); i++){
            while(n%i == 0){
                s.insert(i);
                n /= i;
            }
        }
        if(n != 1){
            s.insert(n);
        }
        cout << *s.rbegin()<< endl;
    }
    return 0;
}