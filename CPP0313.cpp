#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    getline(cin, s);
    string s1;
    cin >> s1;
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        if(tmp != s1){
            cout << tmp << " ";
        }
    }
    return 0;
}