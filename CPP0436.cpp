#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n), res(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            res[i] = v[i];
        }

        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            auto search = upper_bound(v.begin(), v.end(), res[i]);
            if(search != v.end()) cout << *search << " ";
            else cout << "_" << " ";
        }
        cout << endl;
    }
}