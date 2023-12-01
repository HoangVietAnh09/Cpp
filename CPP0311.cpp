#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a[26] = {0};
        for(char x : s){
            a[x-'a']++;
        }
        int maxVal = *max_element(a, a+26);
        if(s.length() - maxVal >= maxVal - 1){
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
}