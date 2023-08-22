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
        for(int i = 0; i < n-1; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        for(int i = *s.begin(); i <= *s.rbegin(); i++){
            if(s.count(i) == 0){
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}