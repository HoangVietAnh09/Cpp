#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[10] = {0};
int checkAlpha(string s){
    if(s[0]-'0' == 0) return 0;
    int length = s.length();
    for(int i = 0; i < length; i++){
        if(!isdigit(s[i])) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        cin >> s;
        set<int> se;
        int length = s.length();
        for(int i = 0; i < length; i++){
            se.insert(s[i]-'0');
        }
        int cnt = 1;
        for(int i = 0; i <= 9; i++){
            if(a[i] == 1) cnt++;
        }
        if(!checkAlpha(s)){
            cout << "INVALID\n";
        }else if(se.size() != 10){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }

}