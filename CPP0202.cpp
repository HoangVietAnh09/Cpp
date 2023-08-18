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
        int min = 10e6;
        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            min = fmin(min, abs(v[i+1]-v[i]));
        }
        cout << min << endl;  
    }
    return 0;
}