#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int tmp = 0;
        for(int i = 0; i < n; i++){
            if(binary_search(a, a+n, a[i]+m) || binary_search(a, a+n, a[i] - m)){
                cout << 1 << endl;
                tmp = 1;
                break;
            }
        }
        if(tmp == 0){
            cout << -1 << endl;
        }
    }
    return 0;
}