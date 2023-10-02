#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] == s[i+1])
            return false;
    }
    return true;
}

bool sort(string &s){
    sort(s.begin(), s.end());
    do{
        if(check(s)){
            return true;
        }
    }while(next_permutation(s.begin(), s.end()));
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(sort(s)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }

    }
    return 0;
}