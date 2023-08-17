#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
        int p = 0, q = n;
        while(p <= q){
            if(prime(q) && prime(p) && p + q == n){
                cout << p << " " << q << endl;
                break;
            }else{
                p++;
                q--;
            }
        }
    }
    return 0;
}