#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            v[i] *= v[i];
        }
        bool check = false;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(binary_search(v.begin(), v.end(), v[i]+v[j])){
                    cout << "YES\n";
                    check = true;
                    break;
                }
            }
        }
        if(check == false) cout << "NO\n";

    }
}