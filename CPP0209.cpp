#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n, q;
        cin >> n >> q;
        int a[n];
        for(int &x : a) cin >> x;
        while(q--){
            int x, y;
            int sum = 0;
            cin >> x >> y;
            for(int i = x-1; i <= y-1; i++){
                sum += a[i];
            }
            cout << sum << endl;
        } 
    }
    return 0;
}