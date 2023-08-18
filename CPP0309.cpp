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
        string tmp;
        int count = 0;
        stringstream ss(s);
        while(ss >> tmp){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}