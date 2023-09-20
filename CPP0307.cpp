#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> ss1;
        set<string> ss2;
        stringstream ss(s1);
        string tmp;
        while(ss >> tmp){
            ss1.insert(tmp);
        }
        stringstream t(s2);
        string tmp1;
        while(t >> tmp1){
            ss2.insert(tmp1);
        }
        for(auto x : ss1){
            if(ss2.find(x) == ss2.end()){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}