#include <bits/stdc++.h>
using namespace std;
#define ll long long
<<<<<<< HEAD
int mod = 1e9+7;
=======
ll N = 10e9+7;
>>>>>>> ea7261b4ac4e960207bc69db9cebfc0d87d07af2
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
<<<<<<< HEAD
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
=======
        for(int &i : a) cin >> i;
        ll sum = 0;
        ll mu = 1;
        for(int i = n-1; i >= 0; i--){
            sum += a[i]*mu;
            sum %= N;
            mu *= x;
            mu %= N;
>>>>>>> ea7261b4ac4e960207bc69db9cebfc0d87d07af2
        }
        cout << sum << endl;
    }
    return 0;
}