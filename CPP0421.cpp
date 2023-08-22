#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(auto x : v){
            if(find(v.begin(), v.end(), x) != v.end()){
                cout << "-1" << " ";
            }else{
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}