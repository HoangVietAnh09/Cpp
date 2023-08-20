#include <bits/stdc++.h>
using namespace std;
int check_chan(string s){
    int tmp = 0;
    for(int i = 0; i < s.length(); i++){
        s[i] -= '0';
        if(s[i]%2 != 0){
            return false;
        }
    }
    return true;
}
int check_dx(string s){
    int l = 0, r = s.length()-1;
    int tmp = 0;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        cin >> str;
        if(check_chan(str) && check_dx(str)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}