#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        sort(v.begin(), v.end());
        cout << v[k-1] << endl;
    
    }
    return 0;
}