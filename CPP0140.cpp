#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll n){
    ll sum = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(i*i == n)
                sum += i;
            else
                sum += i + n/i;
        }
    }
    if(sum-n != n)
        return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}