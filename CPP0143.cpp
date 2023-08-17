#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[100004];
        a[0] = a[1] = 1;
        for(int i = 2; i < 100004; i++){
            a[i] = a[i-1] + a[i-2];
        }
        cout << a[n-1] << endl;
    }
    return 0;
}