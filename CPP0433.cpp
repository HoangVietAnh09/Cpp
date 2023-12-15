#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp){
            vp.push_back({x.first, x.second});
        }
        sort(vp.begin(), vp.end(), cmp);
        for(int i = 0; i < vp.size(); i++){
            for(int j = 0; j < vp[i].second; j++){
                cout << vp[i].first << " ";
            }
        }
        cout << endl;
    }
}