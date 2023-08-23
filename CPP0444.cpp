#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n];
        map<int, int> mp;
        for(int &x : a) cin >> x;
        for(int i = 0; i < n; i++){
            mp.insert({a[i], i});
        }
        for(auto x : mp){
            if(x.first == m){
                cout << x.second+1 << endl;
            }
        }

    }

    return 0;
}