#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[1004];
        a[0] = 0;
        a[1] = 1;
        for(int i = 2; i <= 1000; i++){
            a[i] = a[i-1] + a[i-2];
            a[i] %= mod;
        }
        cout << a[n] << endl;
    }
    return 0;
}