#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        ll n;
        cin >> n;
        ll a = 0;
        for(int i = 0; i < s.length(); i++){
            a = a*10 + s[i]-'0';
            a %= n;
        }
        cout << a << endl;

    }
}