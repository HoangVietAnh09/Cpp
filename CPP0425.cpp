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
        for(int i = 1; i < v.size(); i++){
            if(i%2 == 0 && v[i] <= v[i-1]){
                swap(v[i], v[i-1]);
            }else if(i%2 != 0 && v[i] >= v[i-1]){
                swap(v[i], v[i-1]);
            }
        }
    for(int x : v) cout << x << " ";
    cout << endl;

    }
    return 0;
}