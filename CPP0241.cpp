#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int cnt = 0;
        int l = 0, r = n-1;
        while(l <= r){
            if(v[l] == v[r]){
                l++, r--;
            }else if(v[l] < v[r]){
                l++;
                v[l] += v[l-1];
                cnt++;
            }else{
                r--;
                v[r] += v[r+1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}