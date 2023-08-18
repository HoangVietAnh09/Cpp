#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set<ll> s1;
        set<ll> s2;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            s1.insert(x);
        }
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            s2.insert(x);
        }
        cout << *s2.begin()*(*s1.rbegin()) << endl;

    }
    return 0;
}