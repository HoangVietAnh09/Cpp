#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int k;
        cin >> k;
        cin.ignore();
        map<char, int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]] = 1;
        }
        int cnt = 0;
        for(auto x : m){
            if(x.second == 1){
                cnt++;
            }
        }
        if(cnt+k >= 26){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}