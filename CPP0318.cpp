#include <bits/stdc++.h>
using namespace std;
bool checkSoDep1(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}
bool checkSoDep2(string s){
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] >= s[i+1]) return false;
    }
    return true;
}
bool checkSoDep3(string s){
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] != s[i+1]) return false;
    }
    return true;
}
bool checkSoDep4(string s){
    if((s[0] == s[1] && s[1] == s[2]) && (s[3] == s[4])) return true;
    return false;
}
void process(){
    string s;
    cin >> s;
    s.erase(0, 5);
    s.erase(3, 1);
    if(checkSoDep1(s) || checkSoDep2(s) || checkSoDep3(s) || checkSoDep4(s)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        process();
    }
    return 0;
}