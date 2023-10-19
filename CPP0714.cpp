#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        prev_permutation(v.begin(), v.end());
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}