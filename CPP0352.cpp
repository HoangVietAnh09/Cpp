#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    map<string, int> mp;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        vector<string> vs;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            vs.push_back(tmp);
        }
        string n = vs[vs.size()-1];
        cout << n;
        for(int i = 0; i < vs.size()-1; i++){
            cout << vs[i][0];
            n = n + vs[i][0];
        }
        if(mp.find(n) == mp.end())
            cout << "@ptit.edu.vn";
        else{
            cout << mp[n]+1 << "@ptit.edu.vn";
        }
        mp[n]++;
        cout << endl;
    }
    return 0;
}