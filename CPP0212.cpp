#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N = 10e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        ll sum = 0;
        ll mu = 1;
        for(int i = n-1; i >= 0; i--){
            sum += a[i]*mu;
            sum %= N;
            mu *= x;
            mu %= N;
        }
        cout << sum << endl;
    }
    return 0;
}