#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        vector<string> vs(s.length());
        stringstream ss(s);
        string token;
        while(ss >> token){
            vs.push_back(token);
        }
        for(int i = vs.size() - 1; i >= 0; i--){
            cout << vs[i] << " ";
        }
        cout << endl;
    }
    return 0;
}