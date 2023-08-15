#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(s[s.length()-1] == '6' && s[s.length()-2] == '8')
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}