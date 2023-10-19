#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = n-1; i >= 0; i--){
            cin >> a[i];
        }
        ll sum = 0;
        ll mu = 1;
        for(int i = 0; i < n; i++){
            sum += a[i]*mu;
            sum %= mod;
            mu *= x;
            mu %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}