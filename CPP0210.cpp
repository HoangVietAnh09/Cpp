#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0; 
    }
    return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        int max = -10e6;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i + 1; j < n; j++){
                sum = v[j] - v[i];
                if(sum > max)
                    max = sum;
            }
        }
        if(max < 0)
            cout << -1 << endl;
        else
            cout << max << endl;
    }
    return 0;
}