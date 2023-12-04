#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        map<ll, int> mp;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            mp[x]++;
        }
        for(int i = 0; i < m; i++){
            ll x;
            cin >> x;
            mp[x]++;
        }
        for(int i = 0; i < k; i++){
            ll x;
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second != 1){
                cout << x.first << " ";
            }else{
                continue;
            }
        }
    }
    return 0;
}