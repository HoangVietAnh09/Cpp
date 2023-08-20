#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    set<string> s;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        s.insert(str);
    }
    cout << s.size();
    return 0;
}