#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fib(int n){
    if(n == 0 || n == 1)
        return 1;
    ll f1 = 0, f2 = 1;
    for(int i = 3; i <= 93; i++){
        ll f3 = f1 + f2;
        if(f3 == n)
            return 1;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        for(int x : a){
            if(fib(x))
                cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}