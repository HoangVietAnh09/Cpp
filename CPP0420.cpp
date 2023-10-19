#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        multimap<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp.insert({abs(m-x), x});
        }
        for(auto x : mp){
            cout << x.second << " ";
        }
        cout << endl;
    }
    return 0;
}