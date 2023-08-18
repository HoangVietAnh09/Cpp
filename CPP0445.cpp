#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << *s.rbegin() << endl;
        s.erase(*s.rbegin());
        if(s.size() == 0){
            cout << "-1" << endl;
        }
    }
    return 0;
}