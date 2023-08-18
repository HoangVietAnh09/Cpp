#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i  = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << *s.rbegin() << endl;
    }
    return 0;
}