#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int sum = 0;
        int tmp = 0;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                sum = sum*10 + s[i] - '0';
            }else{
                tmp += sum;
                sum = 0;
            }
        }
        tmp += sum;
        cout << tmp << endl;
    }
    return 0;
}