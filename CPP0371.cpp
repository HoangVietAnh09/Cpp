#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            cout << "." << s[i];
        }
    }
    return 0;
}