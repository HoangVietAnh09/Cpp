#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> v1[i];
        }
        for(int i = 0; i < m; i++){
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int i = 0, j = 0;
        while(i < n && j < m){
            if(v1[i] < v2[j]){
                v.push_back(v1[i]);
                i++;
            }else{
                v.push_back(v2[j]);
                j++;
            }
        }
        while(i < n){
            v.push_back(v1[i]);
            i++;
        }
        while(j < m){
            v.push_back(v2[j]);
            j++;
        }
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}