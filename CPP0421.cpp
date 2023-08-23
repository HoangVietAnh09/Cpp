#include <bits/stdc++.h>
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
        vector<ll> v;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for(ll i = 0; i < n; i++){
            if(find(v.begin(), v.end(), i) != v.end()){
                cout << i << " ";
            }else{
                cout << "-1" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}