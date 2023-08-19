#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, bool> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x] = true;
        }
        for(int i = -10e6; i <= 10e6; i++){
            if(mp[i] == false){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}