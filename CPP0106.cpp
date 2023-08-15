#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int l = 0, r = s.length()-1;
        int tmp = 0;
        while(l <= r){
            if(s[l] != s[r])
                tmp = 1;
            l++;
            r--;
        }
        if(tmp == 0)
                cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}