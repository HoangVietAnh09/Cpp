#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<set<int>> vs;
        for(int i = 0; i < n; i++){
            set<int> stmp;
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                stmp.insert(x);
            }
            vs.push_back(stmp);
        }
        map<int, int> m;
        for(int i = 0; i < n; i++){
            for(auto x: vs[i]){
                m[x]++;
            }
        }
        int count = 0;
        for(auto x : m){
            if(x.second == n){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}