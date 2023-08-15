#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int tmp = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(abs((s[i+1]-'0') - (s[i]-'0')) != 1){
                tmp = 1;
                break;
            }
        }
        if(tmp == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}