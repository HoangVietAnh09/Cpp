#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vt(n);
        for(int i = 0; i < n; i++){
            cin >> vt[i];
        }
        sort(vt.begin(), vt.end());
        vector<int> v;
        int l = 0, r = vt.size()-1;
        while(l <= r){
            if(l == r){
                cout << vt[r];
            }else{
                cout << vt[r] << " " << vt[l] << " ";
            }
            l++, r--;
        }
        cout << endl;
    }
}