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
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int count = 0;
        for(auto x : mp){
            if(x.second > 1){
                count += x.second;
            }
        }
        cout << count << endl;
    }
    return 0;                                                                 
}
