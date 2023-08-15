#include <bits/stdc++.h>
#define ll long long
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
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int min = 10e6;
        for(int i = 0; i < n; i++){
            min = fmin(min, abs(v[i]-v[i+1]));
        }
        cout << min << endl;
    }
    return 0;
}