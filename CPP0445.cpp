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
        if(s.size() == 1){
            cout << "-1" << endl;
        }else{
            cout << *s.begin() << " ";
            s.erase(*s.begin());
            cout << *s.begin() << endl;
        }
    }
    return 0;
}