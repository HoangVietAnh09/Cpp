#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    vector<string> vs;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        vs.push_back(tmp);
    }
    for(int i = 0; i < vs.size(); i++){
        if(i == vs.size()-1){
            for(int j = 0; j < vs[i].length(); j++){
                vs[i][j] = toupper(vs[i][j]);
            }
        }else{
            vs[i][0] = toupper(vs[i][0]);
        }
    }
    for(int i = 0; i < vs.size(); i++){
        if(i == vs.size()-2){
            cout << vs[i] << ", ";
        }else{
            cout << vs[i] << " ";
        }
    }
    return 0;
}