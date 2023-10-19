#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = s.length()-1; j >= i; j--){
                if(s[i] == s[j])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}