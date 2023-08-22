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
        set<int> s1;
        int sum = 0;
        for(char x : s){
            if(isdigit(x)){
                sum = sum*10 + x - '0';
            }else{
                s1.insert(sum);
                sum = 0;
            }
        }
        s1.insert(sum);
        cout << *s1.rbegin() << endl;
    }
    return 0;
}