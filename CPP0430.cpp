#include <bits/stdc++.h>
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
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        int count = 0;
        for(int i = *s.begin(); i <= *s.rbegin(); i++){
            if(s.count(i) == 0){
                count++;
            }
        }
        cout << count << endl;
        
    }
    return 0;
}