#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        string tmp;
        while(ss >> tmp){
            for(int i = 0; i < tmp.length(); i++){
                tmp[i] -= '0';
                s.insert(tmp[i]);
            }
        }
        for(auto x : s) cout << x << " ";
        cout << endl;
    }
    return 0;
}