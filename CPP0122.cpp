#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
ll a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= 10000; i++){
        a[i]=(a[i-1]*i)/(gcd(a[i-1],i));
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}