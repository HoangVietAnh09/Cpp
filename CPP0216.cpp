#include <bits/stdc++.h>
using namespace std;
bool check(int l, int r, vector<int> a){
    for(int i = l; i < r; i++){
        if(a[i] > a[i+1]){
            for(int j = i; j < r; j++){
                if(a[j] <= a[j+1]) return false;
            }
        }
       
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int l, r;
        cin >> l >> r;
        if(check(l, r, v)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}