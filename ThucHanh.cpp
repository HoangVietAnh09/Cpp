#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int a[n];
        int b[d];
        int k = 0;
        for(int &x : a) cin >> x;
        for(int i = 0; i < d; i++){
            b[i] = a[i];
        }
        for(int i = 0; i < n-d; i++){
            a[i] = a[i+d];
        }
        for(int i = n - d; i < n; i++){
            a[i] = b[k++];
        }
        for(int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}