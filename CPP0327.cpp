#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int r = 0;
        for(int i = 0; i < s.length(); i++){
            r = (2*r + s[i] -'0')%5;
        }
        if(r == 0){
            cout << "Yes";
        }else{
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}