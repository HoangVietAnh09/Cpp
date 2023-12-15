#include<bits/stdc++.h> 
using namespace std; 
int main(){
    freopen("DATA.in", "r", stdin);
    int n, m, x; 
    cin >> n >> m; 
    set<int> s; 
    unordered_map<int, int> um; 
    for(int i = 0; i < n; i++){ 
        cin >> x; ++um[x]; 
    }
    for(int i = 0; i < m; i++){ 
        cin >> x; 
        if(um[x])
        s.insert(x); 
    } 
    for(int x : s) cout << x << " ";
    return 0; 
}