#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        map<char, int> mp;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(mp[s[i]] != 0){
                cout << s[i] << mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}