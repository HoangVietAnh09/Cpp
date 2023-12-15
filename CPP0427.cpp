#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        vector<int> res;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                if(a[i] == a[i+1]){
                    a[i] *= 2;
                    res.push_back(a[i]);
                    a[i+1] = 0;
                }else{
                    res.push_back(a[i]);
                }
                
            }
        }
        for(int x : res) cout << x << " ";
        for(int i = 0; i < n - res.size(); i++) cout << 0 << " ";
        cout << endl;
    }
}