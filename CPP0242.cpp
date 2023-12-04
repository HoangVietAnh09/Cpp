#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> m1(n), m2(n);
        for(int &x : m1) cin >> x;
        for(int &x : m2) cin >> x;
        int res = 0;
        for(int i = 0; i < n; i++){
            int x = 0, y = 0;
            for(int j = i; j < n; j++){
                x += m1[j];
                y += m2[j];
                if(x == y){
                    res = fmax(res, j-i+1);
                }
            }
        } 
        cout << res << endl;
    }
    return 0;
}